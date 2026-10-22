/*
 * FUN_10028240 (286 B) - __stdcall, RET 0x10. String-parse/register helper:
 * FUN_1001c7a0(arg1,arg2,0x1004a550,arg3,&local1) -> count; then
 * FUN_1002af80([edi+0x24],&local2), FUN_1002af80([edi+0x28],&local3),
 * FUN_1002af80([edi+0x2c],&local4); then FUN_1001c660(adv_buf,arg3-count,
 * &local2,0x10051158,0x10049bf8,[edi+0x20],0x10049b60,local2,0x10049c34,
 * local3,0x10049ccc,local4) accumulating into *arg4. Frees local2/3/4 via
 * FUN_10001d60 when they differ from the object's cached pointers.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10028240(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a550
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_1c
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x34], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_1c
        mov     ecx, dword ptr [edi + 0x28]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_1c
        mov     eax, dword ptr [edi + 0x2c]
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_1c
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [edi + 0x20]
        push    0x10049ccc
        push    edx
        push    0x10049c34
        push    eax
        push    0x10049b60
        push    ecx
        push    0x10049bf8
        push    0x10051158
        lea     edx, [esp + 0x34]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_1c
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x30]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_1c:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_2e
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_2e:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_40
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_40:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edi + 0x2c]
        je      L_52
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_52:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
