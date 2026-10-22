/*
 * FUN_00569A20 (392 B) — Object find with float parameter validation.
 *
 * Reads parameters from bytecode stream, validates a float value against
 * debug constants, looks up an object, and assigns the float to fields.
 *
 * __cdecl, returns int (always 0).
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_00569a20(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db2a(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064db02(void);
extern int DAT_007dde2c;
extern int DAT_0077f67c;
extern void __cdecl FUN_100566657(void);
extern void __cdecl FUN_006fab71(void);
extern int DAT_0077f680;
extern void __cdecl FUN_100566626(void);
extern void __cdecl FUN_006fab40(void);
extern void __cdecl FUN_100566b32(void);
extern void __cdecl FUN_100566b61(void);
extern void __cdecl FUN_1005697c8(void);
extern void __cdecl FUN_1005668ea(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_10041512a(void);
extern void __cdecl FUN_1005665bc(void);
extern void __cdecl FUN_006faad6(void);
extern void __cdecl FUN_100566591(void);
extern void __cdecl FUN_006faaab(void);
extern void __cdecl FUN_00707d13(void);
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db2a
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db02
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 0x4
        mov     dword ptr [ebp + -0x04], ecx
        mov dword ptr [DAT_0080592c], eax
        fild    dword ptr [ebp + -0x04]
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        fstp    dword ptr [ebp - 0x4]
        jz      Le2

        /* Debug check 1: compare float with [0x77f67c] */
        fld     dword ptr [ebp + -0x04]
        fcomp dword ptr [DAT_0077f67c]
        fnstsw ax
        test    ah, 0x1
        jz      Lb1
        push    0x77fb98
        call FUN_100566657
        push    eax
        call FUN_006fab71
        add     esp, 0x8
        test    eax, eax
        jz      Lb1
        int     3

Lb1:
        /* Debug check 2: compare float with [0x77f680] */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      Le2
        fld     dword ptr [ebp + -0x04]
        fcomp dword ptr [DAT_0077f680]
        fnstsw ax
        test    ah, 0x41
        jnz     Le2
        push    0x77fb6c
        call FUN_100566626
        push    eax
        call FUN_006fab40
        add     esp, 0x8
        test    eax, eax
        jz      Le2
        int     3

Le2:
        push    esi
        call FUN_100566b32
        add     esp, 0x4
        cmp     al, 0x1
        jne     Lb0a

        /* FUN_00566bf0 returned 1 */
        mov     edx, dword ptr [ebp + -0x04]
        push    edx
        push    esi
        call FUN_100566b61
        add     esp, 0x4
        push    eax
        call FUN_1005697c8
        add     esp, 0x8
        jmp     Lb8d

Lb0a:
        /* FUN_00566bf0 returned 0 */
        push    esi
        call FUN_1005668ea
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      Lb8d

        /* esi != 0 */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      Lb77

        /* Debug check */
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041512a
        test    al, al
        jnz     Lb4c
        push    0x77fb40
        call FUN_1005665bc
        push    eax
        call FUN_006faad6
        add     esp, 0x8
        test    eax, eax
        jz      Lb4c
        int     3

Lb4c:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      Lb77
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      Lb77
        push    0x77fb14
        call FUN_100566591
        push    eax
        call FUN_006faaab
        add     esp, 0x8
        test    eax, eax
        jz      Lb77
        int     3

Lb77:
        mov     eax, dword ptr [ebp + -0x04]
        push    0x0
        mov     dword ptr [esi + 0x1bc], eax
        call FUN_00707d13
        fstp    dword ptr [esi + 0x1c0]

Lb8d:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
