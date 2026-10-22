/*
 * FUN_10010770 (168 B) - __stdcall, RET 0x10.
 * String-parse helper: FUN_1001c7a0(arg1,arg2,0x1004a088,arg3,&out1),
 * then FUN_1002af80(&out2,[ebp+0x20]), then FUN_1001c660 with
 * (buf, len, &out2, 0x10050228, 0x10049b60, out2). On success stores
 * out1+out2 into *arg4. Frees out2 if != [ebp+0x20].
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1002af80(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10010770(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a088
        push    ebx
        push    ebp
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      Lfa
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      Lfa
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x10049b60
        push    0x10050228
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      Lfa
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
    Lfa:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x20]
        je      L10c
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L10c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
