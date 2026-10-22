/*
 * FUN_00523580 (283 B) — Initialize player/control options.
 *
 * __thiscall (ECX=this), returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00523580(void)
{
    

extern void __cdecl FUN_10041ee57(void);
extern void __cdecl FUN_0061aa0b(void);
extern void __cdecl FUN_1004d20bc(void);
extern void __cdecl FUN_1004d2619(void);
extern void __cdecl FUN_10041edfe(void);
extern int DAT_007dd230;
extern void __cdecl FUN_10050a53e(void);
extern void __cdecl FUN_1004d2068(void);
extern void __cdecl FUN_1004d25c8(void);
extern void __cdecl FUN_1004d29d1(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_005362d4(void);
extern void __cdecl FUN_1004d20db(void);
extern void __cdecl FUN_10041ee72(void);
extern void __cdecl FUN_1004d20c6(void);
extern void __cdecl FUN_10041ee5d(void);
__asm {
sub     esp, 0xd8
        push    esi
        mov     esi, ecx
        push    edi
        mov     edi, dword ptr [esi + 0x40ee8]
        test    edi, edi
        jz      l_skip
        push    0
        lea     ecx, [esp + 0xc]
        call FUN_10041ee57
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, edi
        call FUN_0061aa0b
        mov     edx, dword ptr [esp + 0x8]
        push    0
        lea     ecx, [esp + 0xc]
        call    dword ptr [edx + 0xc]
        mov     esi, dword ptr [esi + 0x40ee4]
        push    0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0xa8]
        mov     dword ptr [esp + 0x1c], 0xffffffec
        call FUN_1004d20bc
        push    0
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0xa4]
        call FUN_1004d2619
        push    0
        lea     ecx, [esp + 0x34]
        call FUN_10041edfe
        lea     ecx, [esp + 0x30]
        push    ecx
        mov ecx, dword ptr [DAT_007dd230]
        call FUN_10050a53e
        mov     edx, dword ptr [esp + 0x30]
        push    0
        lea     ecx, [esp + 0x34]
        call    dword ptr [edx + 0xc]
        push    0
        push    esi
        push    0x77a158
        lea     ecx, [esp + 0x64]
        mov     dword ptr [esp + 0x44], 0xffffffec
        call FUN_1004d2068
        push    0
        lea     eax, [esp + 0x34]
        push    eax
        lea     ecx, [esp + 0x60]
        call FUN_1004d25c8
        mov     ecx, esi
        call FUN_1004d29d1
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0xc]
        push    edi
        xor     ecx, 0x85739531
        call FUN_005362d4
        lea     ecx, [esp + 0x58]
        call FUN_1004d20db
        lea     ecx, [esp + 0x30]
        call FUN_10041ee72
        lea     ecx, [esp + 0x9c]
        call FUN_1004d20c6
        lea     ecx, [esp + 0x8]
        call FUN_10041ee5d
    l_skip:
        pop     edi
        mov     eax, 1
        pop     esi
        add     esp, 0xd8
        ret
    }


}
