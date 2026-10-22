/*
 * FUN_005a9e10 (367 B) — allocates and initializes several objects,
 * storing the primary one in global 0x007f209c and attaching sub-objects
 * at offset 0x74.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_005a9e10(void)
{
    

extern void __cdecl FUN_1004084d0(void);
extern int DAT_007f214c;
extern int DAT_007f2150;
extern void __cdecl FUN_1005019d6(void);
extern int DAT_007f209c;
extern void __cdecl FUN_10040846d(void);
extern void __cdecl FUN_10050085c(void);
extern void __cdecl FUN_100500e24(void);
extern void __cdecl FUN_10040842d(void);
extern void __cdecl FUN_10050081f(void);
extern void __cdecl FUN_100500de6(void);
extern void __cdecl FUN_1004083ef(void);
extern void __cdecl FUN_1005007e1(void);
extern void __cdecl FUN_100500da8(void);
extern void __cdecl FUN_1004083b1(void);
extern void __cdecl FUN_1005007a3(void);
extern void __cdecl FUN_100500d6f(void);
extern void __cdecl FUN_100500d5d(void);
__asm {
push    0xa4
        call FUN_1004084d0
        add     esp, 0x4
        test    eax, eax
        jz      lbl_fail1
        mov ecx, dword ptr [DAT_007f214c]
        mov edx, dword ptr [DAT_007f2150]
        push    0x502c60
        push    0x5028b0
        push    0x677e00
        push    0x0
        push    0x677de0
        push    ecx
        push    0x507aa0
        push    0x5a9fb0
        push    0x0
        push    0x0
        push    edx
        push    0x785324
        push    0x4a3
        mov     ecx, eax
        call FUN_1005019d6
        mov dword ptr [DAT_007f209c], eax
        jmp     lbl_cont
    lbl_fail1:
        mov dword ptr [DAT_007f209c], 0x0
    lbl_cont:
        push    esi
        push    0x20
        call FUN_10040846d
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      lbl_esi2
        push    0x80
        push    0x231
        push    0x78530c
        push    0x16
        mov     ecx, esi
        call FUN_10050085c
        mov     dword ptr [esi], 0x773cd0
        jmp     lbl_cont2
    lbl_esi2:
        xor     esi, esi
    lbl_cont2:
        mov eax, dword ptr [DAT_007f209c]
        push    esi
        lea     ecx, [eax + 0x74]
        call FUN_100500e24
        push    0x20
        call FUN_10040842d
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      lbl_esi3
        push    0x84
        push    0x4
        push    0x7852f4
        push    0x17
        mov     ecx, esi
        call FUN_10050081f
        mov     dword ptr [esi], 0x775cfc
        jmp     lbl_cont3
    lbl_esi3:
        xor     esi, esi
    lbl_cont3:
        mov ecx, dword ptr [DAT_007f209c]
        push    esi
        add     ecx, 0x74
        call FUN_100500de6
        push    0x20
        call FUN_1004083ef
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      lbl_esi4
        push    0x90
        push    0x4
        push    0x7852d8
        push    0x18
        mov     ecx, esi
        call FUN_1005007e1
        mov     dword ptr [esi], 0x775cfc
        jmp     lbl_cont4
    lbl_esi4:
        xor     esi, esi
    lbl_cont4:
        mov edx, dword ptr [DAT_007f209c]
        push    esi
        lea     ecx, [edx + 0x74]
        call FUN_100500da8
        push    0x20
        call FUN_1004083b1
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      lbl_esi5
        push    0x9c
        push    0x2
        push    0x7852c8
        push    0x19
        mov     ecx, esi
        call FUN_1005007a3
        mov eax, dword ptr [DAT_007f209c]
        push    esi
        lea     ecx, [eax + 0x74]
        mov     dword ptr [esi], 0x775948
        call FUN_100500d6f
        pop     esi
        ret
    lbl_esi5:
        mov eax, dword ptr [DAT_007f209c]
        xor     esi, esi
        push    esi
        lea     ecx, [eax + 0x74]
        call FUN_100500d5d
        pop     esi
        ret
    }


}
