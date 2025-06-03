package com.edigest.journalapp.repository;

import com.edigest.journalapp.entity.JournalEntry;
import org.springframework.data.mongodb.repository.MongoRepository;

public interface JournalEntryRepo extends MongoRepository<JournalEntry, String> {
}
