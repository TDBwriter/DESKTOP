# README Outline

## Summary
This document outlines the key features and development plan for TypeWriter, a distraction-free text editor with integrated worldbuilding tools and Git version control.

## Key Sections

### Description
- Focused on distraction-free writing.
- Includes a text editor, file structure panel, and wiki tool.
- Features cross-platform saving through a single git repository configurable to any cloud service. Regular automatic saves are pushed to a sub-repo with branches structured by YYYYMMDD for real-time versioning. Any TypeWriter can pull and push to the repository, enabling cross-platform functionality.

### UI/UX
- Main text editor window.
- File structure panel for navigation.
- Wiki tool for worldbuilding with predefined categories.
- Toolbar for font customization, alignment, and image insertion.

### Features of the Main Text Editing Panel

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

### Interface Layout

#### Main Text Editor
- Takes up 2/3 of the screen width, spanning 100% top to bottom.
- Supports Markdown editing with raw and preview modes.

#### Left Panel
- Occupies 1/3 of the remaining space to the left of the editor.
- Contains two tabs:
  - **File Structure**: Displays the project folder structure.
  - **Story Structure**: Organizes the story into logical units like scenes and chapters.

#### Right Panel
- Occupies 2/3 of the remaining space to the right of the editor.
- Split horizontally into two sections:
  - **Top Panel (2/3 height)**:
    - Includes two tabs:
      - **Wiki**: Displays story-related or document-related information.
      - **Reference**: Allows browsing Wikimedia for resources.
  - **Bottom Panel (1/3 height)**:
    - Integrated terminal and AI agent.
    - The AI agent can:
      - Modify, save, push, and pull files.
      - Be configured to use different AI models.

#### Integrated AI Model

- Tracks changes in the text editor and updates:
  - **Story Wiki**: Maintains consistency in worldbuilding elements.
  - **Outline**: Synchronizes the story structure with edits.
  - **Story Structure**: Reflects updates in scenes, chapters, and other organizational elements.
- Operates in real-time to ensure all panels remain synchronized.

### AI Feedback and Content Management Features

#### Story Consistency Feedback
- *As a user, I want the AI to analyze my story for consistency so that I can identify and resolve logical gaps.*
- The AI will parse the story content to detect inconsistencies in character behavior, plot progression, and worldbuilding details.

#### Logical Gap Detection
- *As a user, I want the AI to highlight logical gaps in my story so that I can improve its coherence.*
- The AI will flag areas where the story lacks explanation or contradicts established elements.

#### Suggestions for Improvement
- *As a user, I want the AI to suggest improvements to my story so that I can enhance its quality.*
- The AI will provide actionable feedback on pacing, character development, and narrative structure.

#### Wiki Entry Generation
- *As a user, I want the AI to generate wiki entries from my story content so that I can organize my worldbuilding elements.*
- The AI will extract key details about characters, locations, and events to populate the wiki.

#### Outline Management
- *As a user, I want the AI to manage the outline of my story so that I can maintain a clear structure.*
- The AI will create and update the story outline based on the content, ensuring alignment with the narrative.

### Git Integration
- Tracks changes and backs up files.
- Automatic hourly saves and on-demand backups.
- Pushes updates to the `EditsTimeline` branch.
- Repository cloning for backups and system transfers.

### Workflow
- Drafting workflow with branches for iterative drafts.
- Scene and chapter organization.
- Exporting final drafts to PDF or eReader-compatible formats.

### User Journey

#### Opening the Application
- The application automatically loads the most recently changed local file, so users can resume work immediately.
- Users typically pull updates from the git repository to ensure they are working with the latest version.

#### Writing and Saving
- Start writing in the editor; changes are saved automatically.
- Saves are pushed to a sub-repo with branches named by date (e.g., `20250419`).

#### Wiki Tool
- Use the wiki panel to manage worldbuilding elements.
- Add details to predefined categories like characters and locations.

#### Syncing Across Devices
- Pull and push changes to the repository for cross-platform access.

#### Exporting
- Export the final draft to PDF or eReader formats.

### Development Outline
#### MVP Phases
1. Core Text Editor: Basic editor with toolbar.
2. File Management: File structure panel and Git integration.
3. Wiki Tool: Navigation and editing for worldbuilding.
4. Drafting and Exporting: Branch-based drafts and export options.

### Development Roadmap

#### Minimum Viable Product (MVP)
The MVP will deliver a Markdown raw editor with Git integration for automatic change tracking.

##### Phase 1: Core Markdown Editor
- Develop a basic text editor with Markdown syntax support.
- Add line numbering and hard wrap at 80 characters.
- Implement toggle functionality between Markdown raw and preview modes.

##### Phase 2: Git Integration
- Configure a single Git repository for automatic change tracking.
- Implement automatic saves and pushes to a sub-repo with date-based branches (e.g., `20250419`).
- Provide manual pull and push options for users.

##### Phase 3: Basic UI/UX Enhancements
- Add a customizable toolbar for Markdown formatting.
- Include options to show/hide toolbar buttons via a right-click menu or settings.
- Enable horizontal scrolling for toolbar buttons that exceed the pane width.

#### Future Enhancements
- Introduce story wiki, outline, and story structure panels.
- Integrate an AI model for real-time synchronization of story elements.
- Add cross-platform support for collaborative editing.