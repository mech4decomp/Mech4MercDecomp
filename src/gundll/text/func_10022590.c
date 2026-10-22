/*
 * FUN_10022590 (120 B) - __stdcall, RET 0x10 (4 args).  Buffer-parse/format
 * helper: calls FUN_1001c7a0 then FUN_1001c660 with GUIDs and buffer
 * pointers, advancing esi/ecx/ebp by parsed counts; stores result through
 * arg4.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);   /* rel32 call */
extern void __cdecl FUN_1001c660(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10022590(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0x1c]
        push    edi
        mov     edi, dword ptr [esp+0x18]
        lea     eax, [esp+0x10]
        push    eax
        push    esi
        push    0x1004a6f8
        push    ebx
        push    edi
        mov     dword ptr [esp+0x24], 0
        call    FUN_1001c7a0
        test    eax, eax
        jl      L_600
        mov     eax, dword ptr [esp+0x10]
        mov     edx, dword ptr [edi+0x24]
        push    edx
        push    0x10049c2c
        lea     ecx, [ebx+eax*2]
        sub     esi, eax
        mov     ebp, eax
        mov     eax, dword ptr [edi+0x20]
        push    eax
        push    0x10049bc4
        push    0x10050368
        lea     edx, [esp+0x24]
        push    edx
        push    esi
        push    ecx
        call    FUN_1001c660
        add     esp, 0x20
        test    eax, eax
        jl      L_600
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esp+0x24]
        add     ebp, ecx
        mov     dword ptr [edx], ebp
L_600:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
