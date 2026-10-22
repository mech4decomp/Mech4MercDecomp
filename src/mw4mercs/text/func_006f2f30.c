/*
 * FUN_006F2F30 (144 B) — Object state machine transition.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Checks object state at [this+0]. If state == 1 and byte at
 * [this+0x69] is set, compares fields at +0x08 and +0x10 with
 * the parameter. On match, sets byte at [this+0x6a] = 1 or
 * transitions state to 3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern int __cdecl FUN_0041fd80(void);

__declspec(naked) void __fastcall FUN_006f2f30(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x60]
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     ebx, dword ptr [esp + 0x10]
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
        cmp     dword ptr [esi], 1
        jne     l_check_10
        mov     al, byte ptr [esi + 0x69]
        test    al, al
        je      l_check_10
        lea     edi, [esi + 8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je      l_check_10
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     eax, ebx
        jne     l_check_10
        mov     byte ptr [esi + 0x6a], 1
    l_check_10:
        lea     edi, [esi + 0x10]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je      l_done
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     eax, ebx
        jne     l_done
        push    ebp
        mov     ecx, edi
        call    FUN_0041fd80
        lea     ebx, [esi + 0x30]
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_0041fd80
        cmp     eax, ebp
        pop     ebp
        jne     l_reset_10
        mov     ecx, ebx
        call    FUN_0041fcb0
    l_reset_10:
        mov     ecx, edi
        call    FUN_0041fcb0
        mov     dword ptr [esi], 3
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
