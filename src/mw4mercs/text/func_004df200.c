/*
 * FUN_004df200 (156 B) — MLR/Adept input-binding flush. __thiscall,
 * RET 0x4 (1 param). Walks the binding list rooted at [this+0x3b80],
 * dispatching each binding's vtable[+0xc] method, then resets the
 * 0x3b78 sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);

extern int g_007dab44;
extern int g_007dab40;

__declspec(naked) void FUN_004df200(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x5c]
        test    eax, eax
        push    esi
        push    edi
        jnz     L26A
        mov     edi, dword ptr [ebx + 0x3b80]
        test    edi, edi
        jz      L26A
L22B:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        mov     edi, dword ptr [edi + 0x4]
        jz      L26A
        mov     esi, ecx
        sub     esi, ebx
        sub     esi, 0x15c
        mov     eax, 0x6db6db6d
        imul    esi
        sub     edx, esi
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    0xffff
        lea     eax, [esp + 0x10]
        mov     dword ptr [esp + 0x10], edx
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xc]
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4) */
        __emit 0xEB
        __emit 0xC1
L26A:
        lea     esi, [ebx + 0x3b78]
        mov     ecx, esi
        mov     byte ptr [ebx + 0x3b75], 0x1
        call    FUN_0041fd80
        test    eax, eax
        jz      L289
        mov     ecx, esi
        call    FUN_0041fcb0
L289:
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    FUN_0041fcd0
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
