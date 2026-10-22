/*
 * FUN_006B3B00 (195 B) — Tile/surface drawing helper: compute offset, update
 * counters, call virtual method and FUN_0041ec50.
 *
 * __cdecl, RET 0xC (three stack params: index, param_2, param_3).
 *
 * Disassembly:
 *   8B 44 24 04             mov     eax, [esp + 4]
 *   8B 0D 28 C7 7D 00       mov     ecx, [0x007dc728]
 *   53                      push    ebx
 *   55                      push    ebp
 *   50                      push    eax
 *   E8 xx xx xx xx          call    FUN_004e2f20
 *   8B 90 88 01 00 00       mov     edx, [eax + 0x188]
 *   85 D2                   test    edx, edx
 *   0F 84 A0 00 00 00       jz      l_done
 *   8B 0D 44 AB 7D 00       mov     ecx, [0x007dab44]
 *   8B 1D 40 AB 7D 00       mov     ebx, [0x007dab40]
 *   56                      push    esi
 *   8B 31                   mov     esi, [ecx]
 *   8B A8 84 01 00 00       mov     ebp, [eax + 0x184]
 *   33 F3                   xor     esi, ebx
 *   8B 4E 14                mov     ecx, [esi + 0x14]
 *   81 F1 31 95 73 85       xor     ecx, 0x85739531
 *   8B 89 14 18 00 00       mov     ecx, [ecx + 0x1814]
 *   57                      push    edi
 *   8B 7C 24 1C             mov     edi, [esp + 0x1c]
 *   8B 9C B9 98 90 00 00    mov     ebx, [ecx + edi*4 + 0x9098]
 *   81 C1 90 90 00 00       add     ecx, 0x9090
 *   03 DA                   add     ebx, edx
 *   89 5C B9 08             mov     [ecx + edi*4 + 8], ebx
 *   01 91 00 0C 00 00       add     [ecx + 0xc00], edx
 *   8B FA                   mov     edi, edx
 *   80 E2 07                and     dl, 7
 *   88 54 24 14             mov     byte ptr [esp + 0x14], dl
 *   8B 16                   mov     edx, [esi]
 *   81 F2 31 95 73 85       xor     edx, 0x85739531
 *   8B 42 24                mov     eax, [edx + 0x24]
 *   8D 4A 24                lea     ecx, [edx + 0x24]
 *   C1 FF 03                sar     edi, 3
 *   C1 FD 03                sar     ebp, 3
 *   FF 50 04                call    dword ptr [eax + 4]
 *   85 FF                   test    edi, edi
 *   8B D8                   mov     ebx, eax
 *   7E 15                   jle     check_rem
 *   8D 34 2B                lea     esi, [ebx + ebp]
 *   03 EF                   add     ebp, edi
 *   draw_loop:
 *   8B 4C 24 18             mov     ecx, [esp + 0x18]
 *   6A 08                   push    8
 *   56                      push    esi
 *   E8 xx xx xx xx          call    FUN_0041ec50
 *   46                      inc     esi
 *   4F                      dec     edi
 *   75 F0                   jnz     draw_loop
 *   check_rem:
 *   8A 44 24 14             mov     al, byte ptr [esp + 0x14]
 *   84 C0                   test    al, al
 *   5F                      pop     edi
 *   5E                      pop     esi
 *   76 17                   jbe     l_done
 *   8B 4C 24 0C             mov     ecx, [esp + 0xc]
 *   81 E1 FF 00 00 00       and     ecx, 0xff
 *   51                      push    ecx
 *   8B 4C 24 14             mov     ecx, [esp + 0x14]
 *   03 DD                   add     ebx, ebp
 *   53                      push    ebx
 *   E8 xx xx xx xx          call    FUN_0041ec50
 *   done:
 *   5D                      pop     ebp
 *   5B                      pop     ebx
 *   C3                      ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_0041ec50(void *ptr, int size);
void *__cdecl FUN_004e2f20(int index);
void __cdecl FUN_006b3b00(int a, int b, int c);

__declspec(naked) void FUN_006b3b00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
; mov ecx, [0x007dc728]
_emit 0x8B
_emit 0x0D
_emit 0x28
_emit 0xC7
_emit 0x7D
_emit 0x00
        push    ebx
        push    ebp
        push    eax
        call    FUN_004e2f20
        mov     edx, dword ptr [eax + 0x188]
        test    edx, edx
        jz      l_done
; mov ecx, [0x007dab44]
_emit 0x8B
_emit 0x0D
_emit 0x44
_emit 0xAB
_emit 0x7D
_emit 0x00
; mov ebx, [0x007dab40]
_emit 0x8B
_emit 0x1D
_emit 0x40
_emit 0xAB
_emit 0x7D
_emit 0x00
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ebp, dword ptr [eax + 0x184]
        xor     esi, ebx
        mov     ecx, dword ptr [esi + 0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [ecx + edi*4 + 0x9098]
        add     ecx, 0x9090
        add     ebx, edx
        mov     dword ptr [ecx + edi*4 + 8], ebx
        add     dword ptr [ecx + 0xc00], edx
        mov     edi, edx
        and     dl, 7
        mov     byte ptr [esp + 0x14], dl
        mov     edx, dword ptr [esi]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x24]
        lea     ecx, dword ptr [edx + 0x24]
        sar     edi, 3
        sar     ebp, 3
        call    dword ptr [eax + 4]
        test    edi, edi
        mov     ebx, eax
        jle     check_rem
        lea     esi, dword ptr [ebx + ebp]
        add     ebp, edi
draw_loop:
        mov     ecx, dword ptr [esp + 0x18]
        push    8
        push    esi
        call    FUN_0041ec50
        inc     esi
        dec     edi
        jnz     draw_loop
check_rem:
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        pop     edi
        pop     esi
        jbe     l_done
        mov     ecx, dword ptr [esp + 0xc]
        and     ecx, 0xff
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        add     ebx, ebp
        push    ebx
        call    FUN_0041ec50
l_done:
        pop     ebp
        pop     ebx
        ret
    }
}
