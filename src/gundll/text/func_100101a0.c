/*
 * FUN_100101a0 (111 B) - __stdcall, RET 0x10.
 * String-parse helper: calls FUN_1001ca30(arg1,arg2,0x1004a014,arg3,&out),
 * then FUN_1001c660 with (buf, len, &out2, 0x10050298, 0x10049c34, [ebx+0x1c]).
 * On success stores the accumulated length into *arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100101a0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a014
        push    edi
        push    ebx
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001ca30
        test    eax, eax
        jl      L207
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x1c]
        push    edx
        push    0x10049c34
        lea     ecx, [edi + eax*2]
        sub     esi, eax
        mov     ebp, eax
        push    0x10050298
        lea     eax, [esp + 0x1c]
        push    eax
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L207
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
    L207:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
