/*
 * FUN_0x00559ab0 (119 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_00559ab0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00628cee(void);
extern void __cdecl FUN_1004c3d05(void);
extern void __cdecl FUN_1004c3cf4(void);
__asm {
push    esi
        mov     esi, ecx
        push    edi
        mov     edi, [esi + 0x6B4]
        test    edi, edi
        je      L_done
        mov     al, [esi + 0x584]
        test    al, al
        jne     L_check2
        mov     al, [esi + 0x586]
        test    al, al
        je      L_done
L_check2:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0x40]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x40]
        je      L_call1
        mov     ecx, [eax]
        push    0
        xor     ecx, 0x85739531
        call FUN_00628cee
L_call1:
        push    0
        mov     ecx, edi
        call FUN_1004c3d05
        mov     ecx, [esi + 0x6B8]
        test    ecx, ecx
        je      L_clear
        push    0
        call FUN_1004c3cf4
L_clear:
        mov     byte ptr [esi + 0x584], 0
        mov     byte ptr [esi + 0x586], 0
L_done:
        pop     edi
        pop     esi
        ret
    }


}
