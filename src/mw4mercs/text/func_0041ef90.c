/*
 * FUN_0041ef90 (145 B) — __thiscall bit-buffer reserve/grow helper.
 * Ensures the buffer can hold `param_1` more bytes; reallocates to a
 * 0x80-aligned block and copies the existing data when needed.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0041ef90(void)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [esp+0x8]
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx+0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [ebx+0x10]
        sub     ecx, edi
        cmp     byte ptr [ebx+0x24], 0
        lea     eax, [ecx+edx*1]
        mov     dword ptr [esp+0xc], ecx
        mov     dword ptr [esp+0x14], eax
        jz      done
        mov     esi, dword ptr [ebx+0x20]
        sub     esi, ecx
        cmp     esi, edx
        jnc     done
        add     eax, 0x80
        and     eax, 0xffffff80
        push    ebp
        push    eax
        mov     dword ptr [ebx+0x20], eax
        call    FUN_004084d0
        mov     ecx, dword ptr [ebx+0x1c]
        mov     edx, ecx
        mov     ebp, eax
        mov     eax, edi
        shr     ecx, 0x2
        mov     esi, eax
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        push    eax
        rep movsb
        call    FUN_004084e0
        mov     ecx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esp+0x20]
        add     esp, 0x8
        mov     dword ptr [ebx+0x10], ebp
        add     ebp, ecx
        mov     dword ptr [ebx+0x14], ebp
        mov     dword ptr [ebx+0x18], ebp
        pop     ebp
        pop     edi
        mov     dword ptr [ebx+0x1c], eax
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0x4
done:
        cmp     eax, dword ptr [ebx+0x1c]
        jbe     done2
        mov     dword ptr [ebx+0x1c], eax
done2:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
