/*
 * FUN_00556500 (176 B) — Checks state flags, checks a capability via
 * FUN_00629290/FUN_0063FB60, then either clears a sub-object or
 * passes a value from [obj+0xd8] to FUN_004C3D50.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern int __stdcall FUN_00629290(int);
extern int __stdcall FUN_0063fb60(void);
extern void __stdcall FUN_004c3d50(int);
extern int __stdcall FUN_0041fd80(void *);

__declspec(naked) void __stdcall FUN_00556500(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        push    edi
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     loc_ret
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     loc_ret
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        jz      loc_ret
        mov     ecx, dword ptr [eax + 0x40]
        push    0x9
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     ecx, eax
        call    FUN_0063fb60
        test    al, al
        jz      loc_check_obj
        mov     ecx, dword ptr [esi + 0x6B0]
        push    0x0
        call    FUN_004c3d50
        pop     edi
        pop     esi
        ret     0x4
loc_check_obj:
        lea     edi, [esi + 0x6A0]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_ret
        mov     ecx, edi
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xD8]
        mov     ecx, dword ptr [esi + 0x6B0]
        push    eax
        call    FUN_004c3d50
loc_ret:
        pop     edi
        pop     esi
        ret     0x4
    }


}
