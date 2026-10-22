/*
 * FUN_00569620 (636 B) — Object find/dispatch with bytecode stream parsing (7-param variant).
 *
 * Reads parameters from a bytecode stream (global state), looks up an
 * object, and returns a result code. Similar to FUN_005693c0 but with
 * an extra parameter and passes address of local as output.
 *
 * __cdecl, returns int.
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_00569620(void)
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
extern void __cdecl FUN_0064da2d(void);
extern void __cdecl FUN_100566ac5(void);
extern void __cdecl FUN_100566ae3(void);
extern void __cdecl FUN_1005690ba(void);
extern int DAT_00805928;
extern void __cdecl FUN_100566849(void);
extern void __cdecl FUN_100562eab(void);
extern int DAT_0080d9bc;
extern int DAT_007dde2c;
extern void __cdecl FUN_1005664d5(void);
extern void __cdecl FUN_006fa9ef(void);
extern void __cdecl FUN_100568c7c(void);
extern void __cdecl FUN_100562e13(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x10
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
        mov     dword ptr [ebp + -0x10], ecx
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
        mov     dword ptr [ebp + -0x0c], ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064da58
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
        call FUN_0064da2d
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 0x4
        push    esi
        mov dword ptr [DAT_0080592c], eax
        mov     dword ptr [ebp + -0x04], ecx
        call FUN_100566ac5
        add     esp, 0x4
        cmp     al, 0x1
        jne     L7ab

        /* Path: FUN_00566bf0 returned 1 */
        fild    dword ptr [ebp + -0x08]
        mov     edx, dword ptr [ebp + -0x10]
        lea     eax, dword ptr [ebp + -0x04]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebp + -0x0c]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        push    ebx
        push    edi
        push    esi
        call FUN_100566ae3
        add     esp, 0x4
        push    eax
        call FUN_1005690ba
        mov esi, dword ptr [DAT_0080592c]
        mov     edi, eax
        mov eax, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     eax, 0xa000
        add     esp, 0x1c
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      L87a
        jmp     L870

L7ab:
        /* Path: FUN_00566bf0 returned 0 */
        push    esi
        call FUN_100566849
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jnz     L808

        /* esi == 0: return -2 */
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov dword ptr [DAT_0080592c], esi
        jc      L7e2
        push    eax
        call FUN_100562eab
        add     esp, 0x4

L7e2:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        pop     edi
        inc     eax
        mov     dword ptr [esi], 0xfffffffe
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L808:
        /* esi != 0: check dead unit flag */
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      L833
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jz      L833
        push    0x77faf0
        call FUN_1005664d5
        push    eax
        call FUN_006fa9ef
        add     esp, 0x8
        test    eax, eax
        jz      L833
        int     3

L833:
        fild    dword ptr [ebp + -0x08]
        mov     edx, dword ptr [ebp + -0x10]
        lea     eax, dword ptr [ebp + -0x04]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebp + -0x0c]
        fstp    dword ptr [esp]
        push    ecx
        push    edx
        push    ebx
        push    edi
        push    esi
        call FUN_100568c7c
        mov esi, dword ptr [DAT_0080592c]
        mov     edi, eax
        mov eax, dword ptr [DAT_00805928]
        add     esi, 0x4
        add     eax, 0xa000
        add     esp, 0x1c
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      L87a

L870:
        push    0x0
        call FUN_100562e13
        add     esp, 0x4

L87a:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        mov     dword ptr [esi], edi
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9bc]
        mov dword ptr [DAT_00805908], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
