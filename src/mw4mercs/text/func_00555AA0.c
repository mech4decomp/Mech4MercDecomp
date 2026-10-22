/*
 * FUN_00555AA0 (283 B) — Checks state flags and capability, then dispatches
 * through a vtable based on a flag byte at [obj+0x28] of a sub-object.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_0061acf0(int);
extern int __stdcall FUN_0061ad20(int);
extern int __stdcall FUN_00627b70(void);
extern int __stdcall FUN_00627b40(void);
extern void __stdcall FUN_00559ab0(void);

__declspec(naked) void __stdcall FUN_00555AA0(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x384]
        mov     eax, dword ptr [edi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret
        push    0x8000
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad20
        test    al, al
        jz      loc_ret
        mov     ecx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jle     loc_ret
        mov     al, byte ptr [edi + 0x510]
        test    al, al
        jz      loc_ret
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      loc_ret
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x50]
        mov     dl, byte ptr [ecx + 0x28]
        test    dl, dl
        mov     ecx, dword ptr [eax]
        jz      loc_call_b
        xor     ecx, 0x85739531
        call    FUN_00627b70
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xA0]
        pop     edi
        pop     esi
        ret     0x4
loc_call_b:
        xor     ecx, 0x85739531
        call    FUN_00627b40
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0xA4]
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        mov edx, dword ptr [DAT_007dab40]
        mov     al, byte ptr [esi + 0x32E]
        xor     ecx, edx
        add     ecx, 0x40
        test    al, al
        mov     dword ptr [esp + 0xC], ecx
        jz      loc_ret
        mov     ecx, esi
        mov     byte ptr [esi + 0x32E], 0x0
        call    FUN_00559ab0
loc_ret:
        pop     edi
        pop     esi
        ret     0x4
    }


}
