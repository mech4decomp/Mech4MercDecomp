/*
 * FUN_0073A410 (83 B) — __cdecl (2 stack args, RET 8). Loops over a table
 * starting at 0x856BB8 (stride 0x270) writing 0x80-byte rows at [edi]; for
 * each row either calls the function pointer at g_76B320 with (edi, esi,
 * 0x7F) or zeroes the row. Stores the loop count to [arg2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_76b320;
extern int g_857f28;

__declspec(naked) void FUN_0073A410(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_76b320]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        xor     ebx, ebx
        mov     esi, 0x856bb8
loc_73a425:
        cmp     ebx, dword ptr [g_857f28]
        jae     loc_73a438
        push    0x7f
        push    esi
        push    edi
        call    ebp
        add     esp, 0xc
        jmp     loc_73a43b
loc_73a438:
        mov     byte ptr [edi], 0
loc_73a43b:
        add     esi, 0x270
        inc     ebx
        add     edi, 0x80
        cmp     esi, 0x857f38
        jl      loc_73a425
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [g_857f28]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [eax], ecx
        pop     ebx
        ret     8
    }
}
