/*
 * FUN_0053f210 (1783 B) — Mission join/accept handler: reads mission data
 * from a stream, validates checksums, processes player join, updates state.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416F60(void);
extern void __cdecl FUN_004D2AB0(void);
extern void __cdecl FUN_0062DDC0(void);
extern void __cdecl FUN_00535B40(void);
extern void __cdecl FUN_00535F30(void);
extern void __cdecl FUN_004084E0(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004CDFA0(void);
extern void __cdecl FUN_00701F20(void);
extern void __cdecl FUN_006F9000(void);
extern void __cdecl FUN_005450B0(void);
extern void __cdecl FUN_0041EE70(void);
extern void __cdecl FUN_0041F030(void);
extern void __cdecl FUN_004CE190(void);
extern void __cdecl FUN_005446C0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_00563C80(void);
extern void __cdecl FUN_00536DF0(void);
extern void __cdecl FUN_00543EC0(void);
extern void __cdecl FUN_00543BC0(void);
extern void __cdecl FUN_0041EF60(void);

__declspec(naked) void __fastcall FUN_0053f210(void)
{
    

extern int DAT_007db0b8;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007ddd50;
extern int DAT_007ddd54;
extern int DAT_007ddd58;
extern int DAT_007ddd5c;
extern int DAT_007ddd60;
extern int DAT_007ddd64;
extern int DAT_007ddd48;
extern int DAT_007afaf0;
extern int DAT_007afaf4;
extern int DAT_007afaf8;
extern int DAT_007afafc;
extern int DAT_007db094;
extern int DAT_007db090;
__asm {
sub     esp, 0x80
        ; mov eax, dword ptr [0x007DB0B8]
        mov eax, dword ptr [DAT_007db0b8]

        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx                     ; this
        push    edi
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     ecx, [eax + 0x14]
        mov     dword ptr [esp + 0x2C], 1
        call    FUN_00416F60

        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [edx]
        ; xor ecx, dword ptr [0x007DAB40]
        xor ecx, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x1804]
        push    ecx
        mov     ecx, eax
        call    FUN_004D2AB0

        ; mov ecx, dword ptr [0x007DAB40]
        mov ecx, dword ptr [DAT_007dab40]

        ; mov dword ptr [0x007DDD50], eax
        mov dword ptr [DAT_007ddd50], eax
        ; mov eax, dword ptr [0x007DAB44]
        mov eax, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        ; mov dword ptr [0x007DDD54], edx
        mov dword ptr [DAT_007ddd54], edx
        mov     edx, dword ptr [ecx + 0x1804]
        push    edx
        call    FUN_0062DDC0

        ; mov ecx, dword ptr [0x007DDD50]
        mov ecx, dword ptr [DAT_007ddd50]

        xor     ecx, eax
        ; mov eax, dword ptr [0x007DDD54]
        mov eax, dword ptr [DAT_007ddd54]

        ; mov dword ptr [0x007DDD50], ecx
        mov dword ptr [DAT_007ddd50], ecx
        xor     eax, edx
        add     esp, 4
        mov     ecx, ebp
        ; mov dword ptr [0x007DDD54], eax
        mov dword ptr [DAT_007ddd54], eax
        call    FUN_00535B40

        mov     ecx, ebp
        ; mov dword ptr [0x007DDD58], eax
        mov dword ptr [DAT_007ddd58], eax
        ; mov dword ptr [0x007DDD5C], edx
        mov dword ptr [DAT_007ddd5c], edx
        call    FUN_00535F30

        mov     esi, dword ptr [esp + 0x98]  ; param_2 (stream)
        xor     edi, edi
        push    8
        lea     ecx, [esp + 0x44]
        ; mov dword ptr [0x007DDD60], eax
        mov dword ptr [DAT_007ddd60], eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        ; mov dword ptr [0x007DDD64], edx
        mov dword ptr [DAT_007ddd64], edx
        ; mov byte ptr [0x007DDD48], 1
        mov byte ptr [DAT_007ddd48], 0x1
        mov     dword ptr [esp + 0x48], edi
        mov     dword ptr [esp + 0x4C], edi
        mov     dword ptr [esp + 0x40], edi
        mov     dword ptr [esp + 0x44], edi
        call    dword ptr [eax + 0x20]       ; stream->Read(&val, 8)

        mov     edx, dword ptr [esi]
        push    8
        lea     eax, [esp + 0x3C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val2, 8)

        ; mov eax, dword ptr [0x007AFAF0]
        mov eax, dword ptr [DAT_007afaf0]

        ; mov ecx, dword ptr [0x007AFAF4]
        mov ecx, dword ptr [DAT_007afaf4]

        ; mov edx, dword ptr [0x007AFAF8]
        mov edx, dword ptr [DAT_007afaf8]

        ; mov ebx, dword ptr [0x007AFAFC]
        mov ebx, dword ptr [DAT_007afafc]

        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x2C], edi
        mov     dword ptr [esp + 0x30], edi
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x48], eax
        mov     dword ptr [esp + 0x4C], ecx
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [esp + 0x54], ebx
        mov     dword ptr [esp + 0x24], edi
        mov     dword ptr [esp + 0x58], eax
        mov     dword ptr [esp + 0x5C], ecx

        ; mov ecx, dword ptr [0x007DDD60]
        mov ecx, dword ptr [DAT_007ddd60]

        cmp     ecx, dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x64], ebx
        mov     ebx, dword ptr [esp + 0x94]  ; param_1 (byte index)
        mov     dword ptr [esp + 0x60], edx
        jnz     set_status_5

        ; mov edx, dword ptr [0x007DDD64]
        mov edx, dword ptr [DAT_007ddd64]

        cmp     edx, dword ptr [esp + 0x3C]
        jz      checksum_match

    set_status_5:
        mov     dword ptr [esp + 0x10], 5
        jmp     write_status_entry

    checksum_match:
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]       ; stream->Read(&byte1, 1)

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&byte2, 1)

        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&byte3, 1)

        mov     ecx, ebx
        shl     ecx, 7
        add     ecx, ebx
        shl     ecx, 3
        sub     ecx, ebx                     ; ecx = ebx * 0x2038
        mov     eax, dword ptr [ebp + ecx*8 + 0x358C]
        test    eax, eax
        lea     edi, [ebp + ecx*8]
        jz      skip_free

        push    eax
        call    FUN_004084E0
        add     esp, 4
        mov     dword ptr [edi + 0x358C], 0

    skip_free:
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x1C], 0
        call    dword ptr [edx + 0x20]       ; stream->Read(&size, 4)

        mov     ecx, dword ptr [esp + 0x14]  ; size
        push    ecx
        call    FUN_004084D0                 ; allocate

        mov     ecx, dword ptr [esp + 0x18]  ; size again
        mov     edx, dword ptr [esi]
        add     esp, 4
        push    ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [edi + 0x358C], eax
        call    dword ptr [edx + 0x20]       ; stream->Read(buf, size)

        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x1C]
        mov     byte ptr [eax + edx - 1], 0  ; null-terminate

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x2C]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x30], 0
        call    dword ptr [edx + 0x20]       ; stream->Read(&val4, 4)

        mov     ecx, dword ptr [esp + 0x28]  ; val4
        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x355D]
        push    1
        mov     dword ptr [edi + 0x3590], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&byte_flag1, 1)

        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x355E]
        push    1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&byte_flag2, 1)

        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x3594]
        push    8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&guid1, 8)

        mov     edx, dword ptr [esi]
        lea     eax, [edi + 0x359C]
        push    8
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&guid2, 8)

        mov     al, byte ptr [edi + 0x355D]
        test    al, al
        jz      check_flag2

        ; Search loop for flag1 match
        mov     ecx, 1
        lea     eax, [ebp + 0x55CC]
        mov     dword ptr [esp + 0x1C], ecx
        mov     dword ptr [esp + 0x18], eax

    search_loop1:
        cmp     ecx, ebx
        jz      search_loop1_next_skip_ecx
        ; mov edx, dword ptr [0x007DAB44]
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        test    eax, eax
        jz      search_loop1_next

        mov     eax, dword ptr [ebp + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jz      check_guid1_match
        cmp     dword ptr [esp + 0x1C], 1
        jz      search_loop1_next

    check_guid1_match:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ecx]
        cmp     edx, dword ptr [edi + 0x3594]
        jnz     search_loop1_next
        mov     eax, ecx
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, dword ptr [edi + 0x3598]
        jz      found_match1

    search_loop1_next:
        mov     ecx, dword ptr [esp + 0x1C]
    search_loop1_next_skip_ecx:
        mov     edx, dword ptr [esp + 0x18]
        inc     ecx
        add     edx, 0x2038
        cmp     ecx, 0xFF
        mov     dword ptr [esp + 0x1C], ecx
        mov     dword ptr [esp + 0x18], edx
        jl      search_loop1
        jmp     check_flag2

    found_match1:
        mov     dword ptr [esp + 0x10], 8

    check_flag2:
        mov     al, byte ptr [edi + 0x355E]
        test    al, al
        jz      after_searches

        ; Search loop for flag2 match
        mov     ecx, 1
        lea     edx, [ebp + 0x55D4]
        mov     dword ptr [esp + 0x1C], ecx
        mov     dword ptr [esp + 0x18], edx

    search_loop2:
        cmp     ecx, ebx
        jz      search_loop2_next_skip_ecx
        ; mov eax, dword ptr [0x007DAB44]
        mov eax, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [eax]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        push    ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        test    eax, eax
        jz      search_loop2_next

        mov     ecx, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      check_guid2_match
        cmp     dword ptr [esp + 0x1C], 1
        jz      search_loop2_next

    check_guid2_match:
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edx]
        cmp     eax, dword ptr [edi + 0x359C]
        jnz     search_loop2_next
        mov     eax, dword ptr [edi + 0x35A0]
        mov     ecx, edx
        mov     edx, dword ptr [ecx + 4]
        cmp     edx, eax
        jz      found_match2

    search_loop2_next:
        mov     ecx, dword ptr [esp + 0x1C]
    search_loop2_next_skip_ecx:
        mov     edx, dword ptr [esp + 0x18]
        inc     ecx
        add     edx, 0x2038
        cmp     ecx, 0xFF
        mov     dword ptr [esp + 0x1C], ecx
        mov     dword ptr [esp + 0x18], edx
        jl      search_loop2
        jmp     after_searches

    found_match2:
        mov     dword ptr [esp + 0x10], 8

    after_searches:
        push    0
        push    0
        push    1
        call    FUN_00701F20
        cmp     eax, 1
        jnz     skip_clan_name

        ; mov eax, dword ptr [0x007DAB44]
        mov eax, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [eax]
        ; xor eax, dword ptr [0x007DAB40]
        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x14]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004CDFA0
        mov     ecx, dword ptr [edi + 0x358C]
        mov     eax, dword ptr [eax + 0x2C]
        push    ecx
        push    0x79FB70
        push    eax
        call    FUN_006F9000

    skip_clan_name:
        mov     edx, dword ptr [esi]
        push    0x10
        lea     eax, [esp + 0x4C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&data16, 16)

        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&val5, 4)

        mov     edx, dword ptr [esi]
        push    0x10
        lea     eax, [esp + 0x5C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]       ; stream->Read(&data16b, 16)

        ; mov ecx, dword ptr [0x007DDD50]
        mov ecx, dword ptr [DAT_007ddd50]

        cmp     ecx, dword ptr [esp + 0x40]
        jnz     set_status_4

        ; mov edx, dword ptr [0x007DDD54]
        mov edx, dword ptr [DAT_007ddd54]

        cmp     edx, dword ptr [esp + 0x44]
        jz      checksum2_match

    set_status_4:
        mov     dword ptr [esp + 0x10], 4

    checksum2_match:
        ; mov ecx, dword ptr [0x007DB094]
        mov ecx, dword ptr [DAT_007db094]

        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     ebx, eax
        jz      check_status

        mov     edx, dword ptr [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x5C]
        push    eax
        lea     ecx, [esp + 0x50]
        push    ecx
        mov     ecx, ebp
        call    FUN_005450B0
        test    al, al
        jz      check_status
        mov     dword ptr [esp + 0x10], 6

    write_status_xor_edi:
        xor     edi, edi

    write_status_entry:
        push    edi

    write_status_and_return:
        lea     ecx, [esp + 0x6C]
        call    FUN_0041EE70

        push    4
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x70]
        call    FUN_0041F030

        mov     eax, dword ptr [esp + 0x68]
        push    edi
        lea     ecx, [esp + 0x6C]
        call    dword ptr [eax + 0xC]        ; stream->Release()

        mov     edx, dword ptr [esp + 0x78]
        mov     eax, dword ptr [esp + 0x80]
        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        ; mov edi, dword ptr [0x007DAB40]
        mov edi, dword ptr [DAT_007dab40]

        mov     dword ptr [esp + 0x70], 0xFFFFFFEC
        sub     eax, edx
        mov     edx, dword ptr [ecx]
        xor     edx, edi
        mov     ecx, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     esi, dword ptr [ecx + ebx*4 + 0x3C44]
        add     ecx, 0x3C3C
        shl     eax, 3
        add     esi, eax
        mov     dword ptr [ecx + ebx*4 + 0x8], esi
        mov     edi, dword ptr [ecx + 0xC00]
        add     edi, eax
        push    1
        lea     eax, [esp + 0x6C]
        push    eax
        mov     dword ptr [ecx + 0xC00], edi
        mov     ecx, dword ptr [edx]
        push    0x0B
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004CE190

        push    1
        push    ebx
        mov     ecx, ebp
        call    FUN_005446C0

        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    ebx
        push    0x77B730
        call    FUN_00563550
        push    eax
        call    FUN_00563C80
        add     esp, 0x10

        lea     ecx, [esp + 0x68]
        call    FUN_0041EF60

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret     8

    check_status:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jnz     write_status_xor_edi

        ; mov eax, dword ptr [0x007DB0B8]
        mov eax, dword ptr [DAT_007db0b8]

        lea     edx, [esp + 0x28]
        push    edx
        lea     ecx, [eax + 0x14]
        mov     dword ptr [esp + 0x2C], 1
        call    FUN_00416F60

        mov     esi, dword ptr [esp + 0x48]
        xor     esi, dword ptr [esp + 0x4C]
        push    esi
        mov     ecx, eax
        call    FUN_004D2AB0
        push    esi
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x24], edx
        call    FUN_0062DDC0

        mov     ecx, dword ptr [esp + 0x20]
        xor     ecx, eax
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 4
        mov     dword ptr [esp + 0x1C], ecx
        xor     eax, edx
        push    0
        lea     ecx, [esp + 0x6C]
        mov     dword ptr [esp + 0x24], eax
        call    FUN_0041EE70

        push    8
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x70]
        call    FUN_0041F030

        mov     edx, dword ptr [esp + 0x68]
        push    0
        lea     ecx, [esp + 0x6C]
        call    dword ptr [edx + 0xC]        ; stream->Release()

        ; mov ecx, dword ptr [0x007DAB44]
        mov ecx, dword ptr [DAT_007dab44]

        ; mov esi, dword ptr [0x007DAB40]
        mov esi, dword ptr [DAT_007dab40]

        mov     dword ptr [esp + 0x70], 0xFFFFFFEC
        mov     edx, dword ptr [ecx]
        push    1
        lea     eax, [esp + 0x6C]
        push    eax
        xor     edx, esi
        mov     ecx, dword ptr [edx + 0x14]
        push    0x0C
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004CE190

        mov     eax, dword ptr [esp + 0x2C]
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [edi + 0x35B4], eax
        mov     dword ptr [edi + 0x35B8], ecx
        mov     ecx, dword ptr [esp + 0x34]
        test    ecx, ecx
        mov     ecx, dword ptr [esp + 0x48]
        setnz   dl
        mov     byte ptr [edi + 0x353F], dl
        mov     edx, dword ptr [esp + 0x4C]
        lea     eax, [edi + 0x35DC]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x54]
        mov     dword ptr [eax + 8], ecx
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 0xC], edx
        mov     eax, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x5C]
        mov     dword ptr [edi + 0x35EC], eax
        mov     eax, dword ptr [esp + 0x60]
        add     edi, 0x5558
        mov     dword ptr [edi], ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [edi + 4], edx
        mov     dword ptr [edi + 8], eax
        ; mov eax, dword ptr [0x007DB094]
        mov eax, dword ptr [DAT_007db094]

        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        mov     dword ptr [edi + 0xC], ecx
        cmp     ebx, edx
        jz      skip_call_36df0
        push    ebx
        mov     ecx, ebp
        call    FUN_00536DF0

    skip_call_36df0:
        mov     eax, dword ptr [ebp + 0x3098]
        xor     esi, esi
        test    eax, eax
        jle     after_loop

        lea     edi, [ebp + 0x309C]

    loop_3098:
        ; mov eax, dword ptr [0x007DB090]
        mov eax, dword ptr [DAT_007db090]

        mov     edx, dword ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    edi
        push    ebx
        push    0
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x30]       ; this->vtable_method

        mov     eax, dword ptr [ebp + 0x3098]
        inc     esi
        add     edi, 0xDE
        cmp     esi, eax
        jl      loop_3098

    after_loop:
        mov     ecx, ebp
        call    FUN_00543EC0
        mov     esi, eax
        test    esi, esi
        jz      skip_call_43bc0

        ; mov eax, dword ptr [0x007DB090]
        mov eax, dword ptr [DAT_007db090]

        mov     edx, dword ptr [ebp]
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x28]
        push    esi
        push    ebx
        push    0
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x30]       ; this->vtable_method

        push    esi
        call    FUN_004084E0
        add     esp, 4

    skip_call_43bc0:
        mov     ecx, ebp
        call    FUN_00543BC0

        lea     ecx, [esp + 0x68]
        call    FUN_0041EF60

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x80
        ret     8
    }


}
