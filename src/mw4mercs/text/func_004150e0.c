/*
 * FUN_004150e0 (94 B) — archive/database subsystem: allocates a zeroed
 * table of param*4 bytes (stored at 0x7b8c0c), then allocates a 0x14-byte
 * "Stuff::RegisteredClass" object via FUN_004151c0 (stored at 0x7b8c08).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c0c;
extern int g_007b8c08;
extern void *FUN_004084d0(unsigned int);
extern void FUN_004151c0(void);

__declspec(naked) void FUN_004150e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        lea     esi, [eax*4]
        push    edi
        push    esi
        call    FUN_004084d0
        mov     edi, eax
        mov     ecx, esi
        mov     edx, ecx
        shr     ecx, 0x2
        mov     dword ptr [g_007b8c0c], edi
        xor     eax, eax
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        push    0x14
        rep stosb
        call    FUN_004084d0
        add     esp, 0x8
        test    eax, eax
        pop     edi
        pop     esi
        jz      zero
        push    0x0
        push    0x76d3d8
        push    0x11
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007b8c08], eax
        ret
    zero:
        mov     dword ptr [g_007b8c08], 0
        ret
    }
}
