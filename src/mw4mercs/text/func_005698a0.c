/*
 * FUN_005698A0 (377 B) — Object lookup with field assignment.
 *
 * Takes a uint parameter_1 and an int parameter_2, looks up objects,
 * and assigns parameter_2 to field 0x1bc of each found object, then
 * calls FUN_00707e70 and stores the float result to field 0x1c0.
 *
 * __cdecl, returns void.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_005698a0(unsigned int param_1, int param_2)
{
    

extern void __cdecl FUN_00580baf(void);
extern void __cdecl FUN_100566c42(void);
extern void __cdecl FUN_0064e5b8(void);
extern void __cdecl FUN_0064e4e8(void);
extern void __cdecl FUN_0064e09f(void);
extern void __cdecl FUN_0064e096(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca9c(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517e(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_0058125b(void);
extern void __cdecl FUN_00580c3a(void);
extern void __cdecl FUN_0064dfe0(void);
extern void __cdecl FUN_00707d2a(void);
extern void __cdecl FUN_10040837b(void);
__asm {
sub     esp, 0x0c
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]  /* param_1 */
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x0c], 0x0  /* local_c = NULL */
        mov     dword ptr [esp + 0x10], 0x0  /* local_8 = NULL */
        mov     dword ptr [esp + 0x14], 0x0  /* local_4 = NULL */
        jz      Le3

        /* (param_1 & 0xf00000) != 0 path */
        lea     eax, dword ptr [esp + 0x0c]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580baf
        add     esp, 0x8
        jmp     Ld3

Le3:
        /* (param_1 & 0xf00000) == 0 path */
        call FUN_100566c42
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b8
        test    al, al
        jz      Ld3
        push    esi
        mov     ecx, edi
        call FUN_0064e4e8
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e09f
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call FUN_0064e096
        cmp     edi, dword ptr [eax + 0x4]
        jz      Ld3

L1d:
        /* Loop: iterate through objects */
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fca9c
        mov     esi, eax
        test    esi, esi
        jz      Lc0
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     Lc0
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041517e
        cmp     al, 0x1
        jne     Lc0
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      Lc0
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415162
        cmp     al, 0x1
        jne     Lc0
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     Lc0
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      Laf

        /* local_8 != local_4: append to existing list */
        lea     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        call FUN_0058125b
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     Lc0

Laf:
        /* local_8 == local_4: grow list */
        push    0x1
        lea     edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, dword ptr [esp + 0x18]
        call FUN_00580c3a

Lc0:
        mov     ecx, ebp
        add     edi, 0x4
        call FUN_0064dfe0
        cmp     edi, dword ptr [eax + 0x4]
        jnz     L1d

Ld3:
        /* Iterate through collected results, assign param_2 to field */
        mov     esi, dword ptr [esp + 0x0c]
        cmp     esi, dword ptr [esp + 0x10]
        jz      L05

Ldd:
        mov     eax, dword ptr [esp + 0x20]  /* param_2 */
        mov     edi, dword ptr [esi]          /* *local_c */
        push    0x0
        mov     dword ptr [edi + 0x1bc], eax  /* obj->field_1bc = param_2 */
        call FUN_00707d2a
        fstp    dword ptr [edi + 0x1c0]
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x4
        cmp     esi, eax
        jnz     Ldd
        mov     esi, dword ptr [esp + 0x0c]

L05:
        test    esi, esi
        jz      L12
        push    esi
        call FUN_10040837b
        add     esp, 0x4

L12:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x0c
        ret
    }


}
