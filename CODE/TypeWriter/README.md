# TypeWriter Software

## Description
TypeWriter is a simplified text editor designed to remove distractions, allowing users to focus on writing. It features cross-platform saving through the implementation of a single git repository that can be configured to any cloud service a user chooses. Regular automatic saves are pushed to a sub-repo with branches structured by YYYYMMDD to save real-time version and edits information. Any TypeWriter can pull and push to the repository, creating a cross-platform text editor.

## UI/UX
- **Main Window**: A distraction-free text editor for writing stories and other content.
- **File Structure Panel**: Displays the folder structure of the files being edited, representing a git-managed repository.
- **Wiki Tool**: A panel for managing worldbuilding, split into:
  - **Navigation Section**: Displays information in a Wikipedia/encyclopedia style.
  - **Editable Details Section**: Allows editing of selected items.
  - **Categories**: Includes predefined sections for characters, locations, societies, history, technology, flora, economy, religions, factions, and plot-specific elements.
- **Toolbar**: Provides tools for font customization, paragraph alignment, and inserting images.

## Features of the Main Text Editing Panel

### Markdown Support
- The editor supports Markdown syntax, allowing users to format text easily for documents, notes, or publishing.

### Line Numbering
- Each line in the editor is numbered, providing clarity and making it easier to reference specific lines.

### Hard Wrap at 80 Characters
- The editor enforces a hard wrap at 80 characters per line. When a line exceeds this limit, the next word automatically starts on a new line, ensuring consistent formatting.

### Toggle Between Modes
- Users can switch between **Markdown Raw** and **Preview** modes.
- In **Preview Mode**, the text is rendered as formatted Markdown.
- In **Markdown Raw Mode**, users can directly edit the Markdown syntax.

### Toolbar Features
- In **Preview Mode**, the toolbar provides buttons for formatting text, including:
  - Bold, Italic, Underline, Strikethrough.
  - Text size options (e.g., Heading 1, Heading 3, Paragraph).
  - Numbered and Bullet outlines.
  - Blockquotes and other Markdown-supported features.
- In **Markdown Raw Mode**, the toolbar switches to display code references for each formatting option.

### Customizable Toolbar
- Users can show or hide specific buttons or references via:
  - A right-click subtext menu.
  - Settings, where all options are available for customization.
- Buttons or references that exceed the pane's width can be accessed by scrolling horizontally.

## Git Integration
- **Version Control**: Tracks changes, saves progress, and backs up files.
- **Commit Management**: Allows users to create commits to the local repository.
- **Automatic Saves and Pushes**: Commits changes hourly and pushes updates to the `EditsTimeline` branch.
- **On-Demand Backups**: Enables manual backups with a single click.
- **Wiki Integration**: Ensures the wiki is included in all Git updates.
- **Repository Cloning**: Writers can choose a Git repository service to clone a single repository for immediate backups or clone all their work to a new system.

## Workflow
- **Drafting**: Projects are organized as drafts, with each draft represented by a branch. The main branch is `FirstDraft` by default.
- **Scene Organization**: Files represent scenes, and folders represent chapters.
- **Exporting**: Final drafts can be exported to PDF or eReader-compatible filetypes.

## Development Outline

### Minimum Viable Product (MVP)
The MVP focuses on delivering core functionality for distraction-free writing, worldbuilding, and Git integration.

#### Phase 1: Core Text Editor
- Implement a simple text editor with a clean interface.
- Add a toolbar for font customization, paragraph alignment, and image insertion.

#### Phase 2: File and Project Management
- Create a file structure panel for managing files and folders.
- Organize files as scenes and folders as chapters.
- Integrate Git for version control, including commit management, automatic saves, on-demand backups, and pushes to the `EditsTimeline` branch.

#### Phase 3: Wiki Tool
- Develop a wiki tool panel with navigation and editing capabilities.
- Include predefined sections for worldbuilding elements.
- Ensure the wiki is included in Git updates.

#### Phase 4: Drafting and Exporting
- Implement a drafting workflow with branches for iterative drafts.
- Allow users to export the final draft to PDF or eReader-compatible filetypes.

### Future Enhancements
- Add advanced text formatting options (e.g., tables, hyperlinks).
- Introduce collaborative editing features.
- Expand export options to include more file formats.
- Enhance the wiki tool with cross-referencing and search capabilities.
- Implement a timeline visualization for historical events in the wiki.

## Development Roadmap

### Minimum Viable Product (MVP)
The MVP focuses on delivering a Markdown raw editor with Git integration for automatic change tracking.

#### Phase 1: Core Markdown Editor
- Implement a basic text editor with support for Markdown syntax.
- Add line numbering and hard wrap at 80 characters.
- Enable toggle between Markdown raw and preview modes.

#### Phase 2: Git Integration
- Set up a single Git repository for automatic change tracking.
- Implement automatic saves and pushes to a sub-repo with branches named by date (e.g., `20250419`).
- Allow users to pull and push changes manually.

#### Phase 3: Basic UI/UX Enhancements
- Add a customizable toolbar for Markdown formatting options.
- Include a right-click menu and settings for showing/hiding toolbar buttons.
- Ensure horizontal scrolling for toolbar buttons that exceed the pane width.

### Future Enhancements
- Expand the editor to include a story wiki, outline, and story structure panels.
- Integrate an AI model for real-time synchronization of the story wiki and structure.
- Add cross-platform functionality for seamless collaboration.

## AI Feedback and Content Management Features

### Story Consistency Feedback
- *As a user, I want the AI to analyze my story for consistency so that I can identify and resolve logical gaps.*
- The AI will parse the story content to detect inconsistencies in character behavior, plot progression, and worldbuilding details.

### Logical Gap Detection
- *As a user, I want the AI to highlight logical gaps in my story so that I can improve its coherence.*
- The AI will flag areas where the story lacks explanation or contradicts established elements.

### Suggestions for Improvement
- *As a user, I want the AI to suggest improvements to my story so that I can enhance its quality.*
- The AI will provide actionable feedback on pacing, character development, and narrative structure.

### Wiki Entry Generation
- *As a user, I want the AI to generate wiki entries from my story content so that I can organize my worldbuilding elements.*
- The AI will extract key details about characters, locations, and events to populate the wiki.

### Outline Management
- *As a user, I want the AI to manage the outline of my story so that I can maintain a clear structure.*
- The AI will create and update the story outline based on the content, ensuring alignment with the narrative.

## User Journey

### Opening the Application
- The application automatically loads the most recently changed local file, allowing users to resume work immediately.
- Users can pull updates from the git repository to ensure they are working with the latest version.

### Writing and Editing
- Begin writing in the editor; changes are saved automatically.
- Saves are pushed to a sub-repo with branches named by date (e.g., `20250419`).

### Using the Wiki Tool
- Use the wiki panel to manage worldbuilding elements.
- Add details to predefined categories like characters and locations.

### Version Control and Syncing
- Pull and push changes to the repository for cross-platform access.

### Exporting Work
- Export the final draft to PDF or eReader-compatible formats.

## Interface Layout

### Main Text Editor
- Occupies 2/3 of the screen width, spanning 100% from top to bottom.
- Supports Markdown editing with toggleable raw and preview modes.

### Left Panel
- Occupies 1/3 of the remaining space to the left of the editor.
- Features two tabs:
  - **File Structure**: Displays the folder structure of the project.
  - **Story Structure**: Organizes the story into scenes, chapters, or other logical units.

### Right Panel
- Occupies 2/3 of the remaining space to the right of the editor.
- Split horizontally into two sections:
  - **Top Panel (2/3 height)**:
    - Features two tabs:
      - **Wiki**: Displays story-related or document-related information.
      - **Reference**: Allows browsing of Wikimedia for additional resources.
  - **Bottom Panel (1/3 height)**:
    - Integrated terminal and AI agent.
    - The AI agent can:
      - Modify, save, push, and pull files.
      - Be configured to use different AI models based on user preference.

### Integrated AI Model

- The integrated AI model tracks changes made in the text editor and automatically updates:
  - **Story Wiki**: Ensures all worldbuilding elements remain consistent and up-to-date.
  - **Outline**: Keeps the story structure aligned with the latest edits.
  - **Story Structure**: Reflects changes in scenes, chapters, and other organizational elements.
- The AI model operates seamlessly in the background, providing real-time synchronization across all panels.