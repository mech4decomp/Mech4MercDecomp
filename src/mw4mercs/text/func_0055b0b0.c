/*
 * FUN_0x0055b0b0 (122 B)
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_0055b0b0(void)
{
    

extern void __cdecl FUN_1004ebcd6(void);
extern void __cdecl FUN_1004ebe6a(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_10041fd30(void);
extern void __cdecl FUN_10041fd25(void);
extern void __cdecl FUN_1004c3ce3(void);
__asm {
push    esi
        push    edi
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077DCAC
        push    3
        mov     esi, ecx
        call FUN_1004ebcd6
        add     esp, 0x18
        push    0
        mov     ecx, eax
        call FUN_1004ebe6a
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0x40]
        xor     edx, 0x85739531
        lea     edi, [esi + 0x6A0]
        mov     ecx, edi
        mov     byte ptr [edx + 0x168], 0
        call FUN_10041fd30
        test    eax, eax
        je      L_done
        mov     ecx, edi
        call FUN_10041fd25
        mov     eax, [eax + 0xD8]
        mov     ecx, [esi + 0x6B0]
        push    eax
        call FUN_1004c3ce3
L_done:
        pop     edi
        pop     esi
        ret
    }


}
