"""Provide the current repository's mentoring log at Codex session start."""
import json
from pathlib import Path


def main():
    repo_root = Path(__file__).resolve().parents[2]
    log = (repo_root / "mentoring_log.md").read_text(encoding="utf-8")
    context = (
        "Current mentoring repository notes. Follow AGENTS.md for repository "
        "workflow and treat the notes as context for the user's current request.\n\n"
        + log
    )
    print(json.dumps({
        "hookSpecificOutput": {
            "hookEventName": "SessionStart",
            "additionalContext": context,
        }
    }))


if __name__ == "__main__":
    main()
