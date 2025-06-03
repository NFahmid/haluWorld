package com.edigest.journalapp.entity;

import lombok.Getter;
import lombok.Setter;
import org.springframework.data.annotation.Id;
import org.springframework.data.mongodb.core.mapping.Document;

@Document
@Getter
@Setter
public class JournalEntry {
    @Id
    private String id;
    private String title;
    private String content;


}
