/*
 * FUN_00569DD0 (537 B) — Object position query with bytecode stream parsing.
 *
 * Reads parameters from bytecode stream, looks up an object's position,
 * and stores the result vector. Handles various debug checks.
 *
 * __cdecl, returns int (always 0).
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_00569dd0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db12(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064d371(void);
extern void __cdecl FUN_100566b72(void);
extern void __cdecl FUN_100566ba5(void);
extern void __cdecl FUN_100569c1b(void);
extern int DAT_0080d964;
extern int DAT_007dde2c;
extern void __cdecl FUN_1005665f9(void);
extern void __cdecl FUN_006fab13(void);
extern void __cdecl FUN_1005665d3(void);
extern void __cdecl FUN_006faaed(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca07(void);
extern void __cdecl FUN_10056658d(void);
extern void __cdecl FUN_006faaa7(void);
extern int DAT_007dc690;
extern void __cdecl FUN_1004150c8(void);
extern void __cdecl FUN_10056655a(void);
extern void __cdecl FUN_006faa74(void);
extern void __cdecl FUN_1005669f3(void);
extern void __cdecl FUN_0075d96f(void);
extern void __cdecl FUN_0075d965(void);
extern void __cdecl FUN_0075d95a(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    esi
        inc     eax
        push    edi
        mov     dword ptr [ebp + -0x0c], 0xbf800000  /* default = -1.0f */
        mov     dword ptr [ebp + -0x08], 0xbf800000
        mov     dword ptr [ebp + -0x04], 0xbf800000
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db12
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        mov     ecx, dword ptr [eax + 0x1]
        inc     eax
        add     eax, 0x4
        push    0x2
        push    ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064d371
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        xor     eax, eax
        push    esi
        mov     dword ptr [edi], eax          /* result[0] = 0 */
        mov     dword ptr [edi + 0x4], eax    /* result[1] = 0 */
        mov     dword ptr [edi + 0x8], eax    /* result[2] = 0 */
        call FUN_100566b72
        add     esp, 0x0c
        cmp     al, 0x1
        jne     Le85

        /* FUN_00566bf0 returned 1: get position via FUN_00569cb0 */
        push    esi
        call FUN_100566ba5
        push    eax
        lea     eax, dword ptr [ebp + -0x18]
        push    eax
        call FUN_100569c1b
        fld     dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [eax + 0x8]
        add     esp, 0x0c
        mov     dword ptr [ebp + -0x08], ecx
        mov     dword ptr [ebp + -0x04], edx
        jmp     Lfb0

Le85:
        /* FUN_00566bf0 returned 0 */
        cmp     esi, -0x1
        jne     Le94
        mov eax, dword ptr [DAT_0080d964]
        jmp     Lf71

Le94:
        mov al, byte ptr [DAT_007dde2c]
        push    ebx
        mov     ebx, esi
        sar     ebx, 0x18
        test    al, al
        jz      Lee5

        /* Debug check 1: EBX < 0 */
        test    ebx, ebx
        jge     Lebf
        push    0x77f724
        call FUN_1005665f9
        push    eax
        call FUN_006fab13
        add     esp, 0x8
        test    eax, eax
        jz      Lebf
        int     3

Lebf:
        /* Debug check 2: EBX >= 0x12 */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      Lee5
        cmp     ebx, 0x12
        jl      Lee5
        push    0x77f724
        call FUN_1005665d3
        push    eax
        call FUN_006faaed
        add     esp, 0x8
        test    eax, eax
        jz      Lee5
        int     3

Lee5:
        /* Look up object by ID */
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call FUN_1004fca07
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        pop     ebx
        jz      Lf5e

        /* Debug check: ESI == 0 */
        test    esi, esi
        jnz     Lf2b
        push    0x77f724
        call FUN_10056658d
        push    eax
        call FUN_006faaa7
        add     esp, 0x8
        test    eax, eax
        jz      Lf2b
        int     3

Lf2b:
        /* Debug check: team check */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      Lf5e
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_1004150c8
        test    al, al
        jnz     Lf5e
        push    0x77f68c
        call FUN_10056655a
        push    eax
        call FUN_006faa74
        add     esp, 0x8
        test    eax, eax
        jz      Lf5e
        int     3

Lf5e:
        test    esi, esi
        jnz     Lf66
        xor     eax, eax
        jmp     Lf71

Lf66:
        xor     eax, eax
        cmp     esi, -0x1
        setz    al
        dec     eax
        and     eax, esi

Lf71:
        push    eax
        call FUN_1005669f3
        add     esp, 0x4
        test    eax, eax
        jz      Lfad

        /* Object found: extract position */
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [ebp + -0x14], ecx
        mov     ecx, edx
        mov     dword ptr [ebp + -0x10], edx
        mov     dword ptr [ebp + -0x08], eax
        mov     dword ptr [ebp + -0x04], ecx
        jmp     Lfb0

Lfad:
        /* Object not found: use default (-1.0f) */
        fld     dword ptr [ebp + -0x0c]

Lfb0:
        /* Convert float to int via _ftol and store */
        call FUN_0075d96f
        fld     dword ptr [ebp + -0x08]
        mov     dword ptr [edi], eax
        call FUN_0075d965
        fld     dword ptr [ebp + -0x04]
        mov     dword ptr [edi + 0x4], eax
        call FUN_0075d95a
        mov     dword ptr [edi + 0x8], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        pop     edi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], edx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
