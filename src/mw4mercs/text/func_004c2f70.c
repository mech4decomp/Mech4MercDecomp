/*
 * FUN_004C2F70 (132 B) — MLR camera-element init / option registration (cdecl).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004084d0(void);
extern void FUN_004151c0(void *this);
extern void FUN_0070f090(void);
extern void FUN_0040ecc0(void);
extern void FUN_00411ec0(void *this);

extern int g_7dab04;
extern int g_7daaf4;

__declspec(naked) void FUN_004c2f70(void)
{
    __asm {
        push    esi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      l_alloc_fail

        mov     eax, dword ptr [g_7dab04]
        push    eax
        push    0x771648
        push    0x82
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi + 0x14], 0x4c3490
        mov     dword ptr [g_7daaf4], esi
        jmp     l_after_alloc

    l_alloc_fail:
        mov     dword ptr [g_7daaf4], 0x0

    l_after_alloc:
        push    0x0
        push    0x0
        push    0x4c3010
        push    0x4c3000
        push    0x771624
        call    FUN_0070f090
        mov     ecx, dword ptr [esp + 0x8]
        test    ecx, ecx
        pop     esi
        jz      l_end

        push    0x76d9ec
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_end

        push    0x0
        push    0x7daaf8
        push    0x77161c
        mov     ecx, eax
        call    FUN_00411ec0

    l_end:
        ret
    }
}
