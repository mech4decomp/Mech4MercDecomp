/*
 * FUN_004f8480 (178 B) — __thiscall. Computes two scaled float deltas
 * from a pointer table (obfuscated by XOR 0x85739531), then calls
 * FUN_004f8860 twice against two sub-objects and returns a code.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab40;
extern int g_007dab44;

extern void __cdecl FUN_004f8860(void);

__declspec(naked) void FUN_004f8480(void)
{
    __asm {
        sub     esp, 8
        mov     edx, dword ptr [g_007dab40]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     ebx, dword ptr [eax+0x1c]
        add     eax, 0x1c
        mov     eax, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [esp+0x18]
        fld     dword ptr [edi]
        xor     ebx, 0x85739531
        fsub    dword ptr [ebx+0x16c]
        xor     eax, 0x85739531
        fmul    dword ptr [eax+0x170]
        fstp    dword ptr [esp+0xc]
        mov     ecx, dword ptr [ecx]
        fld     dword ptr [edi+8]
        xor     ecx, edx
        mov     edx, dword ptr [ecx+0x1c]
        lea     eax, [ecx+0x1c]
        mov     eax, dword ptr [eax]
        xor     edx, 0x85739531
        fsub    dword ptr [edx+0x174]
        xor     eax, 0x85739531
        lea     ecx, [esi+0x18c]
        push    ecx
        fmul    dword ptr [eax+0x178]
        lea     edx, [esp+0x10]
        push    edx
        fstp    dword ptr [esp+0x18]
        call    FUN_004f8860
        add     esp, 8
        test    al, al
        jz      L_850e
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 8
        ret     0x4
L_850e:
        add     esi, 0x194
        lea     eax, [esp+0xc]
        push    esi
        push    eax
        call    FUN_004f8860
        add     esp, 8
        neg     al
        pop     edi
        pop     esi
        pop     ebx
        sbb     eax, eax
        add     eax, 2
        add     esp, 8
        ret     0x4
    }
}
