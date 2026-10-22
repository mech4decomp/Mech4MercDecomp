/* FUN_0059dba0 (0x0059DBA0, 455 bytes) */
/* Constructor - reads data from stream into arrays */

__declspec(naked) void func_0059dba0(void)
{
    

extern int DAT_007b8c10;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0059efe9(void);
extern void __cdecl FUN_0059efdc(void);
extern void __cdecl FUN_10041293c(void);
extern void __cdecl FUN_10040ef7f(void);
extern void __cdecl FUN_100547c48(void);
extern void __cdecl FUN_1004083d0(void);
extern void __cdecl FUN_1004128b3(void);
extern void __cdecl FUN_100547bb5(void);
extern void __cdecl FUN_10040833b(void);
__asm {
sub     esp, 0x10
        /* mov eax, [0x7b8c10] */
        mov eax, dword ptr [DAT_007b8c10]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        /* call 0x415180 */
        call FUN_00415180
        lea     ecx, [esp + 0x13]
        xor     ebp, ebp
        lea     ebx, [edi + 0x2c]
        push    ecx
        mov     ecx, ebx
        mov     [edi + 8], ebp
        mov     [edi + 0xc], ebp
        mov     dword ptr [edi], 0x76cd9c
        /* call 0x59f010 */
        call FUN_0059efe9
        lea     edx, [esp + 0x13]
        lea     ecx, [edi + 0x38]
        push    edx
        /* call 0x59f010 */
        call FUN_0059efdc
        mov     esi, [esp + 0x24]
        mov     eax, [esi]
        push    4
        lea     ecx, [edi + 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [edi], 0x7838e8
        call    dword ptr [eax + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [edi + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        cmp     [esp + 0x18], ebp
        mov     [esp + 0x14], ebp
        jle     L_loop1_done
        jmp     L_loop1_start
L_loop1_reset:
        xor     ebp, ebp
L_loop1_start:
        lea     ecx, [esp + 0x24]
        push    ecx
        push    esi
        mov     [esp + 0x2c], ebp
        /* call 0x412a00 */
        call FUN_10041293c
        mov     ebp, [ebx + 4]
        mov     eax, [ebx + 8]
        add     esp, 8
        cmp     ebp, eax
        je      L_grow_arr1
        test    ebp, ebp
        je      L_arr1_store_skip
        lea     edx, [esp + 0x24]
        push    edx
        mov     ecx, ebp
        /* call 0x40f060 */
        call FUN_10040ef7f
L_arr1_store_skip:
        add     ebp, 4
        mov     [ebx + 4], ebp
        jmp     L_arr1_after_grow
L_grow_arr1:
        push    1
        lea     eax, [esp + 0x28]
        push    eax
        push    ebp
        mov     ecx, ebx
        /* call 0x547d40 */
        call FUN_100547c48
L_arr1_after_grow:
        mov     eax, [esp + 0x24]
        test    eax, eax
        je      L_arr1_skip_free
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_arr1_skip_free
        push    eax
        /* call 0x4084e0 */
        call FUN_1004083d0
        add     esp, 4
L_arr1_skip_free:
        mov     eax, [esp + 0x14]
        mov     ecx, [esp + 0x18]
        inc     eax
        cmp     eax, ecx
        mov     [esp + 0x14], eax
        jl      L_loop1_reset
        xor     ebp, ebp
L_loop1_done:
        mov     edx, [esi]
        push    4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, [esp + 0x1c]
        xor     ebx, ebx
        cmp     eax, ebp
        jle     L_done
L_loop2_start:
        lea     ecx, [esp + 0x24]
        push    ecx
        push    esi
        mov     [esp + 0x2c], ebp
        /* call 0x412a00 */
        call FUN_1004128b3
        mov     eax, [edi + 0x3c]
        mov     edx, [edi + 0x40]
        lea     ecx, [edi + 0x38]
        add     esp, 8
        cmp     eax, edx
        je      L_grow_arr2
        cmp     eax, ebp
        mov     edx, [esp + 0x24]
        je      L_arr2_store_skip
        mov     [eax], edx
        mov     edx, [esp + 0x24]
        cmp     edx, ebp
        je      L_arr2_store_skip
        inc     byte ptr [edx - 1]
        mov     edx, [esp + 0x24]
L_arr2_store_skip:
        add     eax, 4
        mov     [ecx + 4], eax
        jmp     L_arr2_after_grow
L_grow_arr2:
        push    1
        lea     edx, [esp + 0x28]
        push    edx
        push    eax
        /* call 0x547d40 */
        call FUN_100547bb5
        mov     edx, [esp + 0x24]
L_arr2_after_grow:
        cmp     edx, ebp
        je      L_arr2_skip_free
        mov     cl, [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     [eax], cl
        jne     L_arr2_skip_free
        push    eax
        /* call 0x4084e0 */
        call FUN_10040833b
        add     esp, 4
L_arr2_skip_free:
        mov     eax, [esp + 0x1c]
        inc     ebx
        cmp     ebx, eax
        jl      L_loop2_start
L_done:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    }


}
