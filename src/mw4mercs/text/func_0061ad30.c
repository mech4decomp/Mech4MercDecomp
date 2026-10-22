/*
 * FUN_0061ad30 (245 B) — __thiscall: set/clear a bit flag on *this based on
 * param_2 (1=set, else clear), then walks an obfuscated global object list
 * (XOR key 0x85739531) to update per-entry sub-flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern void FUN_0061ad20(void);

__declspec(naked) void FUN_0061ad30(void)
{
    __asm {
        cmp     byte ptr [esp+8], 1
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        jnz     L48
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [esp+0x10]
        or      ecx, eax
        mov     dword ptr [edi], ecx
        jmp     L54
L48:
        mov     ecx, dword ptr [esp+0x10]
        mov     eax, dword ptr [edi]
        not     ecx
        and     eax, ecx
        mov     dword ptr [edi], eax
L54:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x2c]
        add     eax, 0x2c
        xor     ecx, 0x85739531
        jz      L1f
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx+0x384]
        xor     ebx, ebx
        cmp     ecx, ebx
        jz      L1f
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     esi, dword ptr [eax+0x384]
        push    1
        mov     ecx, edi
        call    FUN_0061ad20
        test    al, al
        jnz     Lac
        mov     dword ptr [esi+0x42c], ebx
Lac:
        push    4
        mov     ecx, edi
        call    FUN_0061ad20
        test    al, al
        jnz     Le0c
        mov     ecx, dword ptr [esi+0x410]
        mov     edx, dword ptr [esi+0x40c]
        sub     ecx, edx
        sar     ecx, 2
        jz      Le0c
        mov     eax, edx
        cmp     dword ptr [eax], ebx
        jz      Le0c
        mov     edx, dword ptr [esi+0x410]
        mov     ecx, eax
        sub     edx, ecx
        sar     edx, 2
        jz      Le5
        mov     ecx, dword ptr [eax]
        jmp     Le7
Le5:
        xor     ecx, ecx
Le7:
        mov     edx, dword ptr [esi+0x40c]
        mov     dword ptr [ecx+0x1cc], ebx
        mov     ecx, dword ptr [esi+0x410]
        sub     ecx, edx
        sar     ecx, 2
        jz      Le04
        mov     eax, dword ptr [eax]
        jmp     Le06
Le04:
        xor     eax, eax
Le06:
        mov     dword ptr [eax+0x1c8], ebx
Le0c:
        push    2
        mov     ecx, edi
        call    FUN_0061ad20
        test    al, al
        jnz     L1f
        mov     dword ptr [esi+0x430], ebx
L1f:
        pop     edi
        pop     esi
        pop     ebx
        ret     8
    }
}
