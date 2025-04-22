# README Outline

## Summary
This document outlines the key features and development plan for TypeWriter, a distraction-free text editor with integrated worldbuilding tools and Git version control.

## Development Roadmap

### Minimum Viable Product (MVP)
The MVP will deliver a Markdown raw editor with Git integration for automatic change tracking.

#### Phase 1: Core Markdown Editor
- Develop a basic text editor with Markdown syntax support.
- Add line numbering and hard wrap at 80 characters.
- Implement toggle functionality between Markdown raw and preview modes.

#### Phase 2: Git Integration
- Configure a single Git repository for automatic change tracking.
- Implement automatic saves and pushes to a sub-repo with date-based branches (e.g., `20250419`).
- Provide manual pull and push options for users.

#### Phase 3: Basic UI/UX Enhancements
- Add a customizable toolbar for Markdown formatting.
- Include options to show/hide toolbar buttons via a right-click menu or settings.
- Enable horizontal scrolling for toolbar buttons that exceed the pane width.

### Future Enhancements
- Introduce story wiki, outline, and story structure panels.
- Integrate an AI model for real-time synchronization of story elements.
- Add cross-platform support for collaborative editing.

## Features

### Core Features (MVP)

#### Markdown Support
- The editor supports Markdown syntax for easy formatting.

#### Line Numbering
- Each line is numbered for clarity and reference.

#### Hard Wrap at 80 Characters
- Text wraps at 80 characters, starting the next word on a new line automatically.

#### Toggle Between Modes
- Switch between **Markdown Raw** and **Preview** modes.
- **Preview Mode** renders formatted Markdown.
- **Markdown Raw Mode** allows direct editing of Markdown syntax.

#### Toolbar Features
- **Preview Mode** toolbar includes buttons for:
  - Bold, Italic, Underline, Strikethrough.
  - Text size (e.g., Heading 1, Heading 3, Paragraph).
  - Numbered and Bullet outlines.
  - Blockquotes and other Markdown features.
- **Markdown Raw Mode** toolbar displays code references for formatting options.

#### Customizable Toolbar
- Show or hide buttons/references via:
  - Right-click subtext menu.
  - Settings for full customization.
- Scroll horizontally to access buttons/references beyond the pane's width.

### Future Features

#### Story Wiki and Outline Management
- Introduce a story wiki panel to manage worldbuilding elements.
- Add an outline panel to organize the story structure into logical units like scenes and chapters.

#### AI Integration
- Real-time synchronization of story elements, including:
  - Story Wiki: Maintains consistency in worldbuilding elements.
  - Outline: Synchronizes the story structure with edits.
  - Story Structure: Reflects updates in scenes, chapters, and other organizational elements.

#### Git Integration Enhancements
- Automatic hourly saves and on-demand backups.
- Pushes updates to the `EditsTimeline` branch.
- Repository cloning for backups and system transfers.

#### Exporting
- Export final drafts to PDF or eReader-compatible formats.

## User Journey

### Opening the Application
- The application automatically loads the most recently changed local file, so users can resume work immediately.
- Users typically pull updates from the git repository to ensure they are working with the latest version.

### Writing and Saving
- Start writing in the editor; changes are saved automatically.
- Saves are pushed to a sub-repo with branches named by date (e.g., `20250419`).

### Wiki Tool
- Use the wiki panel to manage worldbuilding elements.
- Add details to predefined categories like characters and locations.

### Syncing Across Devices
- Pull and push changes to the repository for cross-platform access.

### Exporting
- Export the final draft to PDF or eReader formats.