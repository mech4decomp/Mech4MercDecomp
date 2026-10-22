/*
 * FUN_005693C0 (593 B) — Object find/dispatch with bytecode stream parsing.
 *
 * Reads parameters from a bytecode stream (global state), looks up an
 * object, and returns a result code.
 *
 * __cdecl, returns int.
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_005693c0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db26(void);
extern int DAT_0080592c;
extern void __cdecl FUN_0064dafe(void);
extern void __cdecl FUN_0064dad6(void);
extern void __cdecl FUN_0064daae(void);
extern void __cdecl FUN_0064da83(void);
extern void __cdecl FUN_0064da58(void);
extern void __cdecl FUN_100566af0(void);
extern void __cdecl FUN_100566b10(void);
extern void __cdecl FUN_1005690e7(void);
extern int DAT_00805928;
extern void __cdecl FUN_100566874(void);
extern void __cdecl FUN_100562ed6(void);
extern int DAT_0080d9bc;
extern int DAT_007dde2c;
extern void __cdecl FUN_100566500(void);
extern void __cdecl FUN_006faa1a(void);
extern void __cdecl FUN_100568ca9(void);
extern void __cdecl FUN_100562e3e(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x0c
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db26
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064dafe
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064dad6
        mov eax, dword ptr [DAT_0080592c]
        mov     ebx, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064daae
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [ebp + -0x0c], ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064da83
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 0x4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [ebp + -0x08], ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064da58
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 0x4
        push    esi
        mov     dword ptr [ebp + -0x04], ecx
        mov dword ptr [DAT_0080592c], eax
        call FUN_100566af0
        add     esp, 0x4
        cmp     al, 0x1
        jne     L520

        /* Path: FUN_00566bf0 returned 1 */
        fild    dword ptr [ebp + -0x04]
        mov     edx, dword ptr [ebp + -0x08]
        mov     eax, dword ptr [ebp + -0x0c]
        push    0x0
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        push    eax
        push    ebx
        push    edi
        push    esi
        call FUN_100566b10
        add     esp, 0x4
        push    eax
        call FUN_1005690e7
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     ecx, 0xa000
        add     esp, 0x1c
        cmp     esi, ecx
        mov     edi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      L5ef
        jmp     L5e5

L520:
        /* Path: FUN_00566bf0 returned 0 */
        push    esi
        call FUN_100566874
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jnz     L57d

        /* esi == 0: return -2 */
        mov esi, dword ptr [DAT_0080592c]
        mov edx, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov dword ptr [DAT_0080592c], esi
        jc      L557
        push    eax
        call FUN_100562ed6
        add     esp, 0x4

L557:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        mov     dword ptr [esi], 0xfffffffe
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L57d:
        /* esi != 0: check dead unit flag */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L5a8
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      L5a8
        push    0x77faf0
        call FUN_100566500
        push    eax
        call FUN_006faa1a
        add     esp, 0x8
        test    eax, eax
        jz      L5a8
        int     3

L5a8:
        fild    dword ptr [ebp + -0x04]
        mov     edx, dword ptr [ebp + -0x08]
        mov     eax, dword ptr [ebp + -0x0c]
        push    0x0
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        push    eax
        push    ebx
        push    edi
        push    esi
        call FUN_100568ca9
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     ecx, 0xa000
        add     esp, 0x1c
        cmp     esi, ecx
        mov     edi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      L5ef

L5e5:
        push    0x0
        call FUN_100562e3e
        add     esp, 0x4

L5ef:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        mov     dword ptr [esi], edi
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
