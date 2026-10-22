/*
 * FUN_006b3090 (328 B) — Counts live objects across several linked lists
 * and iterator-style containers rooted at a decoded object pointer.
 *
 * Decodes a pointer via the XOR obfuscation scheme (0x7dab44 ^ 0x7dab40),
 * XORs with 0x85739531, then walks a series of linked lists (0x4d4, 0x4e4,
 * 0x4ec, 0x4fc) and iterator containers (0x4c4, 0x4cc, 0x4dc, 0x4f4),
 * counting non-empty entries into EDI. Returns the count in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;   /* 0x007dab44 */
extern unsigned int g_7dab40;   /* 0x007dab40 */
extern int __cdecl FUN_0040c0e0(void);

__declspec(naked) int FUN_006b3090(void)
{
    __asm {
        sub     esp, 0x30
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        push    esi
        xor     ecx, dword ptr [g_7dab40]
        mov     esi, dword ptr [ecx]
        xor     esi, 0x85739531
        lea     eax, [esi + 0x4c4]
        mov     dword ptr [esp + 0x8], eax
        mov     edx, dword ptr [eax]
        push    edi
        lea     ecx, [esp + 0x8]
        xor     edi, edi
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x8], 0x79a004
        call    FUN_0040c0e0
        test    eax, eax
        jz      L1
L0:
        lea     ecx, [esp + 0x8]
        inc     edi
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L0
L1:
        lea     eax, [esi + 0x4cc]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [eax]
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x14], 0x79a000
        call    FUN_0040c0e0
        test    eax, eax
        jz      L2
L1b:
        lea     ecx, [esp + 0x14]
        inc     edi
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L1b
L2:
        mov     eax, dword ptr [esi + 0x4d4]
        test    eax, eax
        jz      L3
L2b:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        jz      L3
        inc     edi
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xF0
L3:
        lea     eax, [esi + 0x4dc]
        mov     dword ptr [esp + 0x24], eax
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x28], ecx
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x20], 0x799ff8
        call    FUN_0040c0e0
        test    eax, eax
        jz      L4
L3b:
        lea     ecx, [esp + 0x20]
        inc     edi
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L3b
L4:
        mov     eax, dword ptr [esi + 0x4e4]
        test    eax, eax
        jz      L5
L4b:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        jz      L5
        inc     edi
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xF0
L5:
        mov     eax, dword ptr [esi + 0x4ec]
        test    eax, eax
        jz      L6
L5b:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        jz      L6
        inc     edi
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xF0
L6:
        lea     eax, [esi + 0x4f4]
        mov     dword ptr [esp + 0x30], eax
        mov     edx, dword ptr [eax]
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x2c], 0x79a008
        call    FUN_0040c0e0
        test    eax, eax
        jz      L7
L6b:
        lea     ecx, [esp + 0x2c]
        inc     edi
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L6b
L7:
        mov     eax, dword ptr [esi + 0x4fc]
        test    eax, eax
        jz      L8
L7b:
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        jz      L8
        inc     edi
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4, call-reloc between branch and target) */
        __emit 0xF0
L8:
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x30
        ret
    }
}
