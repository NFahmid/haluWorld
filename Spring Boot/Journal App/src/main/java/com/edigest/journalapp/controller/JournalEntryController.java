package com.edigest.journalapp.controller;

import com.edigest.journalapp.entity.JournalEntry;
import com.edigest.journalapp.service.JournalEntryService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

@RestController
@RequestMapping("/journal")
public class JournalEntryController {
    @Autowired
    private JournalEntryService journalEntryService;

    @GetMapping("/entries")
    public List<JournalEntry> getJournalEntryList() {
        return journalEntryService.getAllEntries();
    }

    @PostMapping
    public void createEntry(@RequestBody JournalEntry journalEntry) {
        journalEntryService.saveEntry(journalEntry);
    }


}
