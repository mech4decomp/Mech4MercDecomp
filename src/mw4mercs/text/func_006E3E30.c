/*
 * FUN_006E3E30 (149 B) — __thiscall (2 stack args, RET 8). Grows a
 * buffer: calls FUN_006E2970, clamps arg1 to [esi-8], calls
 * FUN_006E2890/FUN_006E2920, then shifts the buffer contents right by
 * one byte (rep movsd/movsb) and writes arg2's low byte at the front.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006E2970(void);
extern void __cdecl FUN_006E2890(void);
extern void __cdecl FUN_006E2920(void);

__declspec(naked) void FUN_006E3E30(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        call    FUN_006E2970
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jge     loc_6e3e4c
        mov     dword ptr [esp + 0x18], 0
loc_6e3e4c:
        mov     esi, dword ptr [ebp]
        mov     ebx, dword ptr [esi - 8]
        cmp     dword ptr [esp + 0x18], ebx
        jle     loc_6e3e5c
        mov     dword ptr [esp + 0x18], ebx
loc_6e3e5c:
        mov     eax, dword ptr [esi - 4]
        inc     ebx
        cmp     eax, ebx
        jge     loc_6e3e91
        lea     edi, [esi - 0xc]
        push    ebx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], edi
        call    FUN_006E2890
        mov     ecx, dword ptr [edi + 4]
        mov     edi, dword ptr [ebp]
        mov     eax, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006E2920
loc_6e3e91:
        mov     edx, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [ebp]
        lea     eax, [edx + ebp]
        mov     ecx, ebx
        sub     ecx, edx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, eax
        lea     edi, [eax + 1]
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     cl, byte ptr [esp + 0x1c]
        pop     edi
        mov     byte ptr [eax], cl
        pop     esi
        mov     dword ptr [ebp - 8], ebx
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     ecx
        ret     8
    }
}
