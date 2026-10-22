/*
 * FUN_006E2EB0 (97 B) — Buffer resize with copy (string/buffer realloc).
 *
 * Checks if the buffer at *this needs resizing. If refcount > 1 or
 * capacity < param, reallocates via FUN_006E2890, copies old data
 * (iVar2+1 bytes) to new buffer, updates capacity, and calls
 * FUN_006E2920 on the old header.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: new minimum size).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006e2890(int size);
extern void __fastcall FUN_006e2920(void *header);

__declspec(naked) void __stdcall FUN_006e2eb0(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx]            ; eax = buffer ptr
        mov     ecx, dword ptr [eax - 0x0C]     ; ecx = refcount
        push    esi
        lea     esi, [eax - 0x0C]               ; esi = header
        cmp     ecx, 1
        mov     ecx, dword ptr [esp + 0x10]     ; ecx = param (new size)
        mov     dword ptr [esp + 8], esi
        jg      l_needs_realloc
        cmp     ecx, dword ptr [eax - 4]        ; compare with capacity
        jle     l_ret
    l_needs_realloc:
        push    ebp
        mov     ebp, dword ptr [eax - 8]        ; ebp = old capacity
        cmp     ecx, ebp
        push    edi
        jge     l_use_param
        mov     ecx, ebp
    l_use_param:
        push    ecx
        mov     ecx, ebx
        call    FUN_006e2890
        mov     edi, dword ptr [ebx]            ; edi = new buffer
        lea     ecx, [ebp + 1]                  ; ecx = old_capacity + 1
        mov     eax, ecx
        shr     ecx, 2
        add     esi, 0x0C                       ; esi = old data start
        rep movsd                               ; copy dwords
        mov     ecx, eax
        and     ecx, 3
        rep movsb                               ; copy remaining bytes
        mov     ecx, dword ptr [esp + 0x10]     ; ecx = param
        mov     ebx, dword ptr [ebx]            ; ebx = new buffer
        push    ecx
        mov     dword ptr [ebx - 8], ebp        ; set capacity = old capacity
        call    FUN_006e2920                    ; free old header
        pop     edi
        mov     eax, ebx
        pop     ebp
    l_ret:
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    }
}
