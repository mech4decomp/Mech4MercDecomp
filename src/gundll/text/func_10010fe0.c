/*
 * FUN_10010fe0 (129 B) - __stdcall, RET 0x10.
 * String-parse helper: calls FUN_1001c7a0(arg1,arg2,0x1004a154,arg3,&out),
 * then FUN_1001c660 with (buf, len, &out2, 0x10050300, 0x10049bc8,
 * [esi+0x20], 0x10049bcc, [esi+0x24], 0x10049be0, [esi+0x28]).
 * On success stores the accumulated length into *arg4.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10010fe0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a154
        push    ebx
        push    esi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L59
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x28]
        push    edx
        mov     edx, dword ptr [esi + 0x20]
        push    0x10049be0
        lea     ecx, [ebx + eax*2]
        sub     edi, eax
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        push    0x10049bcc
        push    edx
        push    0x10049bc8
        push    0x10050300
        lea     eax, [esp + 0x2c]
        push    eax
        push    edi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x28
        test    eax, eax
        jl      L59
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
    L59:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
