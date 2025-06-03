package com.edigest.journalapp.service;

import com.edigest.journalapp.entity.JournalEntry;
import com.edigest.journalapp.repository.JournalEntryRepo;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import org.springframework.stereotype.Service;

import java.util.List;

@Component
public class JournalEntryService {
    @Autowired
    private JournalEntryRepo journalEntryRepo;

    public void saveEntry(JournalEntry journalEntry) {
        journalEntryRepo.save(journalEntry);
    }

    public List<JournalEntry> getAllEntries() {
        return journalEntryRepo.findAll();
    }

}
