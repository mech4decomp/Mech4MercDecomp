/*
 * FUNC_0040ecc0 (147 B) — __thiscall, RET 0x4. Looks up a named config value
 * in a table (via FUN_0040fe00), returns the found entry or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0040fe00(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040ecc0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        mov     esi, ecx
        push    edi
        lea     ecx, [esp+0x14]
        call    FUN_00412570
        test    edi, edi
        jz      loc_40ECE2
        lea     ecx, [esp+0x10]
        call    FUN_004128e0
        jmp     loc_40ECF0
loc_40ECE2:
        push    0x76b768
        lea     ecx, [esp+0x14]
        call    FUN_00412780
loc_40ECF0:
        mov     esi, dword ptr [esi+0x4c]
        lea     eax, [esp+0x10]
        push    eax
        lea     ecx, [esp+0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_0040fe00
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [esi]
        jz      loc_40ED30
        mov     esi, dword ptr [eax+0x14]
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      loc_40ED28
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_40ED28
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_40ED28:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
loc_40ED30:
        mov     eax, dword ptr [esp+0x10]
        test    eax, eax
        jz      loc_40ED4B
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_40ED4B
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_40ED4B:
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0x4
    }
}
