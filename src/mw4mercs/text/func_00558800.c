/*
 * FUN_00558800 (134 B) — Object method dispatcher. Loads global,
 * XORs with another global, checks flags, dispatches call.
 *
 * __thiscall (ECX = this), no params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00558800(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00558825(void);
extern void __cdecl FUN_00558817(void);
__asm {
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0x20]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov ecx, dword ptr [DAT_007dab44]
        mov ebx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx]
        xor     ecx, ebx
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x17]
        test    bl, bl
        jz      L_check2
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x50]
        mov     ebx, dword ptr [edx + 0x70]
        test    ebx, ebx
        jz      L_ret
L_check2:
        mov     ecx, dword ptr [ecx + 0x20]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x169]
        test    dl, dl
        jz      L_call2
        add     eax, 0x28
        push    eax
        mov     ecx, esi
        call FUN_00558825
        pop     esi
        pop     ebx
        ret
L_call2:
        add     eax, 0x24
        push    eax
        mov     ecx, esi
        call FUN_00558817
L_ret:
        pop     esi
        pop     ebx
        ret
    }


}
