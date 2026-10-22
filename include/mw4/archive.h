/*
 * include/mw4/archive.h
 *
 * Stream reader object used by the #VBD archive loader.
 * Vtable at 0x0076D7B0 in .rdata (12 methods).
 *
 * The StreamReader wraps a memory-mapped view of an archive file and
 * provides sequential read/write access with position tracking.
 *
 * Field layout (resolved from stream_init.c / FUN_0041E690):
 *   +0x00  lpVtbl        (StreamReaderVtbl*)
 *   +0x04  field_04      (unknown — not written by ctor)
 *   +0x08  sentinel      (0xFFFFFFEC = -20; written by ctor)
 *   +0x0c  field_0c      (unknown — not written by ctor)
 *   +0x10  base          (start of mapped buffer)
 *   +0x14  cur_ptr       (current read/write position in buffer)
 *   +0x18  end_ptr       (end-of-data pointer; clamped on writes)
 *   +0x1c  length        (size of the mapped buffer)
 */

#ifndef MW4_ARCHIVE_H
#define MW4_ARCHIVE_H

struct StreamReader;

typedef struct StreamReaderVtbl {
    void *(__stdcall *dtor)(struct StreamReader *, int);       /* [0] +0x00: 0x0041F090 */
    void *(__stdcall *get_cur_ptr)(struct StreamReader *);     /* [1] +0x04: 0x0041F0D0 */
    int   (__stdcall *method2)(struct StreamReader *);         /* [2] +0x08: 0x0041E320 */
    void *(__stdcall *method3)(struct StreamReader *, int);    /* [3] +0x0c: 0x0041F100 */
    void *(__stdcall *method4)(struct StreamReader *, int);    /* [4] +0x10: 0x0041F0E0 */
    int   (__stdcall *method5)(struct StreamReader *, int);    /* [5] +0x14: 0x0041E420 */
    void *(__stdcall *method6)(struct StreamReader *, int);    /* [6] +0x18: 0x0041F120 */
    void *(__stdcall *method7)(struct StreamReader *, int);    /* [7] +0x1c: 0x0041F140 */
    void *(__stdcall *read)(struct StreamReader *, void *, unsigned int);  /* [8] +0x20: 0x0041E720 */
    void *(__stdcall *write)(struct StreamReader *, const void *, unsigned int); /* [9] +0x24: 0x0041E950 */
    int   (__stdcall *method10)(struct StreamReader *);        /* [10] +0x28: 0x0041E760 */
    int   (__stdcall *method11)(struct StreamReader *, void *, int); /* [11] +0x2c: 0x0041E790 */
} StreamReaderVtbl;

typedef struct StreamReader {
    StreamReaderVtbl *lpVtbl;       /* +0x00 */
    void            *field_04;      /* +0x04 */
    long             sentinel;      /* +0x08: always 0xFFFFFFEC (-20) */
    void            *field_0c;      /* +0x0c */
    unsigned char   *base;          /* +0x10: start of mapped buffer */
    unsigned char   *cur_ptr;       /* +0x14: current read/write position */
    unsigned char   *end_ptr;       /* +0x18: end-of-data pointer */
    unsigned long    length;        /* +0x1c: size of the mapped buffer */
} StreamReader;

/*
 * ArchiveEntryInternal — internal representation of an archive entry.
 * Populated by entry_parser_ctor (FUN_00413480) from on-disk Mw4ArchiveEntry.
 * Field mapping (from dir_populate.c analysis):
 *   param0 = filetime low, param1 = filetime high
 *   param2 = uncompressed_size, param3 = stored_size
 *   param4 = data_off, param5 = entry_index (16-bit)
 *   param6 = name_len, param7 = StreamReader* (for name copy)
 */
#pragma pack(push, 1)
typedef struct {
    unsigned long  field_00;       /* +0x00: filetime low */
    unsigned long  field_04;       /* +0x04: filetime high */
    unsigned long  field_08;       /* +0x08: absolute data offset / buffer ptr */
    unsigned long  field_0c;       /* +0x0c: hash chain next (table1) */
    unsigned long  field_10;       /* +0x10: hash chain next (table2) */
    unsigned long  field_14;       /* +0x14: name hash */
    unsigned long  field_18;       /* +0x18: stored_size */
    unsigned long  field_1c;       /* +0x1c: uncompressed_size */
    unsigned long  field_20;       /* +0x20: data_off */
    unsigned short field_24;       /* +0x24: entry_index */
    unsigned char  field_26;       /* +0x26: loaded flag (0 or 1) */
    unsigned char  field_27;       /* +0x27: name_length */
    char           name[1];        /* +0x28: name buffer (variable length) */
} ArchiveEntryInternal;
#pragma pack(pop)

/* Hash table size constant */
#define HASH_TABLE_SIZE 0x3FD  /* 1021 */

/*
 * DirPopulateCtx — archive context struct (0x2000 bytes).
 * NOTE: Different functions use different field interpretations of this struct.
 * The fetch dispatchers (entry_find_by_index, entry_find_by_name, entry_next)
 * use +0x04 through +0x1C as input/output parameter slots.
 * The directory populator (dir_populate) uses +0x10 as base offset and
 * +0x14 as entry_count. The hash tables always start at +0x18 and +0x100C.
 * Each .c file defines its own local typedef for the fields it uses.
 */

#endif /* MW4_ARCHIVE_H */
