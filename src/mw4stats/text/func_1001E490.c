/*
 * FUN_1001e490 (851 B) - __stdcall (2 args, RET 0x8). SEH-guarded stats
 * serialization: builds an XML content-type header, iterates a critical
 * section's item list, appends per-item data via FUN_1001c4e0, and frees
 * the temporary buffers. Handler at 0x10020236.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;        /* IAT: wcslen */
extern void *g_100210ec;        /* free() */
extern char g_10020236;         /* SEH handler */
extern char g_10026488;         /* "Content-Type: text/xml" */
extern char g_100274ec;         /* DAT_100274ec (empty string) */
extern char g_10026b00;         /* error string */
extern char g_1002645c;         /* format string */
extern char g_10026ac4;         /* error string */
extern char g_10026a8c;         /* error string */
extern void __cdecl FUN_1001e7f0(void);
extern void __cdecl FUN_1001eb80(void);
extern void __cdecl FUN_10011f80(void);
extern void __cdecl FUN_10012200(void);
extern void __cdecl FUN_1001c1c0(void);
extern void __cdecl FUN_1001c4e0(void);
extern void __cdecl FUN_1000b1d0(void);
extern void __cdecl FUN_1000a0d0(void);
extern void __cdecl FUN_100011a0(void);
extern void __cdecl FUN_1001c240(void);

__declspec(naked) void __cdecl FUN_1001e490(void)
{
    __asm {
        push    -1
        push    offset g_10020236
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x160
        push    ebx
        push    ebp
        push    esi
        xor     ebx, ebx
        mov     eax, 0x400
        push    edi
        xor     esi, esi
        xor     edi, edi
        mov     dword ptr [esp + 0xd8], ebx
        mov     dword ptr [esp + 0xdc], ebx
        mov     dword ptr [esp + 0xe0], ebx
        mov     dword ptr [esp + 0xe4], ebx
        mov     dword ptr [esp + 0xe8], ebx
        mov     dword ptr [esp + 0xec], eax
        mov     dword ptr [esp + 0x178], ebx
        mov     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x44], ebx
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x54], eax
        mov     ebp, dword ptr [esp + 0x180]
        lea     eax, [esp + 0xd8]
        push    eax
        push    ebp
        mov     byte ptr [esp + 0x180], 0x1
        call    FUN_1001e7f0
        lea     ecx, [esp + 0x40]
        push    ecx
        push    ebp
        call    FUN_1001eb80
        lea     ecx, [ebp + 0x6c]
        call    FUN_10011f80
        cmp     eax, ebx
        jz      L_e555
L_e537:
        cmp     edi, dword ptr [esp + 0x184]
        jnc     L_e555
        mov     ecx, dword ptr [eax + 0xb4]
        add     esi, ecx
        lea     ecx, [ebp + 0x6c]
        inc     edi
        call    FUN_10012200
        cmp     eax, ebx
        jnz     L_e537
L_e555:
        mov     edx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0xe4]
        add     eax, edx
        push    offset g_10026488
        add     eax, esi
        mov     dword ptr [esp + 0x1c], 0x28
        mov     dword ptr [ebp + 0xc8], eax
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], offset g_10026488
        call    dword ptr [g_100210f4]
        mov     ecx, dword ptr [ebp + 0xc8]
        add     esp, 0x4
        lea     esi, [ebp + 0x18]
        lea     edx, [esp + 0x18]
        mov     dword ptr [esp + 0x34], ecx
        push    ebx
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x2c], eax
        mov     dword ptr [esp + 0x30], 0x1
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x38], ebx
        mov     dword ptr [esp + 0x40], ebx
        mov     dword ptr [esp + 0x44], ebx
        call    FUN_1001c1c0
        test    eax, eax
        jz      L_e612
        cmp     byte ptr [ebp + 0x14], bl
        jnz     L_e612
        mov     ecx, dword ptr [esp + 0xe4]
        mov     eax, dword ptr [esp + 0xd8]
        cmp     ecx, ebx
        ja      L_e5e2
        mov     eax, offset g_100274ec
L_e5e2:
        lea     edx, [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_1001c4e0
        test    eax, eax
        jnz     L_e603
        push    offset g_10026b00
        call    FUN_1000b1d0
        add     esp, 0x4
        jmp     L_e612
L_e603:
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x14], eax
        mov     al, byte ptr [ebp + 0x14]
        cmp     al, bl
        jz      L_e640
L_e612:
        lea     ecx, [esp + 0x40]
        mov     byte ptr [esp + 0x178], bl
        call    FUN_100011a0
        lea     ecx, [esp + 0xd8]
        mov     dword ptr [esp + 0x178], 0xffffffff
        call    FUN_100011a0
        xor     eax, eax
        jmp     L_e7c8
L_e640:
        lea     ecx, [ebp + 0x6c]
        call    FUN_10011f80
        mov     esi, eax
        xor     edi, edi
        cmp     esi, ebx
        jz      L_e6db
L_e654:
        cmp     edi, dword ptr [esp + 0x184]
        jnc     L_e6db
        mov     ecx, dword ptr [esi + 0xb4]
        mov     eax, ecx
        cmp     eax, ebx
        jbe     L_e671
        mov     eax, dword ptr [esi + 0xa8]
        jmp     L_e676
L_e671:
        mov     eax, offset g_100274ec
L_e676:
        lea     edx, [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        lea     ecx, [ebp + 0x18]
        call    FUN_1001c4e0
        test    eax, eax
        jz      L_e708
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        add     ecx, eax
        mov     al, byte ptr [ebp + 0x14]
        cmp     al, bl
        mov     dword ptr [esp + 0x14], ecx
        jnz     L_e715
        cmp     dword ptr [esi + 0xb4], ebx
        jbe     L_e6ae
        mov     eax, dword ptr [esi + 0xa8]
        jmp     L_e6b3
L_e6ae:
        mov     eax, offset g_100274ec
L_e6b3:
        push    eax
        push    offset g_1002645c
        call    FUN_1000a0d0
        add     esp, 0x8
        lea     ecx, [ebp + 0x6c]
        mov     dword ptr [esi + 0xc], 0x8
        inc     edi
        call    FUN_10012200
        mov     esi, eax
        cmp     esi, ebx
        jnz     L_e654
L_e6db:
        mov     ecx, dword ptr [esp + 0x4c]
        mov     eax, dword ptr [esp + 0x40]
        cmp     ecx, ebx
        ja      L_e6ec
        mov     eax, offset g_100274ec
L_e6ec:
        lea     edx, [esp + 0x10]
        lea     esi, [ebp + 0x18]
        push    edx
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_1001c4e0
        test    eax, eax
        jnz     L_e72d
        push    offset g_10026ac4
        jmp     L_e70d
L_e708:
        push    offset g_10026a8c
L_e70d:
        call    FUN_1000b1d0
        add     esp, 0x4
L_e715:
        mov     eax, dword ptr [esp + 0x4c]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     L_e74e
        mov     eax, dword ptr [esp + 0x40]
        cmp     eax, ebx
        jz      L_e74e
        jmp     L_e748
L_e72d:
        cmp     byte ptr [ebp + 0x14], bl
        jz      L_e77a
        mov     eax, dword ptr [esp + 0x4c]
        mov     esi, dword ptr [g_100210ec]
        cmp     eax, ebx
        jbe     L_e74e
        mov     eax, dword ptr [esp + 0x40]
        cmp     eax, ebx
        jz      L_e74e
L_e748:
        push    eax
        call    esi
        add     esp, 0x4
L_e74e:
        mov     eax, dword ptr [esp + 0xe4]
        mov     dword ptr [esp + 0x40], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x4c], ebx
        jbe     L_e776
        mov     eax, dword ptr [esp + 0xd8]
        cmp     eax, ebx
        jz      L_e776
        push    eax
        call    esi
        add     esp, 0x4
L_e776:
        xor     eax, eax
        jmp     L_e7c8
L_e77a:
        push    ebx
        mov     ecx, esi
        call    FUN_1001c240
        mov     esi, dword ptr [g_100210ec]
        mov     edi, eax
        cmp     dword ptr [esp + 0x4c], ebx
        jbe     L_e79e
        mov     eax, dword ptr [esp + 0x40]
        cmp     eax, ebx
        jz      L_e79e
        push    eax
        call    esi
        add     esp, 0x4
L_e79e:
        mov     eax, dword ptr [esp + 0xe4]
        mov     dword ptr [esp + 0x40], ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x50], ebx
        mov     dword ptr [esp + 0x4c], ebx
        jbe     L_e7c6
        mov     eax, dword ptr [esp + 0xd8]
        cmp     eax, ebx
        jz      L_e7c6
        push    eax
        call    esi
        add     esp, 0x4
L_e7c6:
        mov     eax, edi
L_e7c8:
        mov     ecx, dword ptr [esp + 0x170]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x16c
        ret     0x8
    }
}
