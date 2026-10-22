/*
 * FUN_100075e0 (242 B) - __thiscall SEH-guarded version-check routine.
 * Sets up an exception registration frame, allocates a stack buffer via
 * FUN_1001ef70, calls FUN_10008be0(this, &local_1c, param_1). On success
 * compares the returned string against version string 0x100254e0; if equal
 * calls FUN_10006cc0(*(param_1+4)) and on success releases the buffer and
 * returns 1. Error paths call FUN_10008d30 with a message string.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001ef70(void);
extern void __cdecl FUN_10008be0(void);
extern void __cdecl FUN_10006cc0(void);
extern void __cdecl FUN_10008d30(void);
extern void *g_100210E0;   /* IAT import, called via CALL dword ptr [g_100210E0] */

__declspec(naked) void __cdecl FUN_100075e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x1001f778
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0xc
        push    esi
        push    edi
        mov     esi, ecx
        mov     eax, 0x804
        call    FUN_1001ef70
        mov     eax, esp
        mov     dword ptr [ebp - 0x18], 0
        mov     dword ptr [ebp - 0x14], eax
        mov     dword ptr [ebp - 0x10], 0x400
        mov     edi, dword ptr [ebp + 8]
        lea     eax, [ebp - 0x18]
        push    edi
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp - 4], 0
        call    FUN_10008be0
        test    al, al
        jz      loc_76a0
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jnz     loc_7649
        mov     eax, 0x100254e0
        neg     eax
        sbb     eax, eax
        inc     eax
        jmp     loc_765d
loc_7649:
        mov     ecx, 0x100254e0
        test    ecx, ecx
        jz      loc_7661
        push    ecx
        push    eax
        call    dword ptr [g_100210E0]
        add     esp, 8
loc_765d:
        test    eax, eax
        jnz     loc_7694
loc_7661:
        mov     eax, dword ptr [edi + 4]
        push    eax
        call    FUN_10006cc0
        test    al, al
        jz      loc_768d
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 4], 0xffffffff
        test    eax, eax
        jz      loc_7689
        mov     ecx, dword ptr [ebp - 0x18]
        test    ecx, ecx
        jz      loc_7689
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
loc_7689:
        mov     al, 1
        jmp     loc_76bd
loc_768d:
        push    0x100254c0
        jmp     loc_7699
loc_7694:
        push    0x100254a0
loc_7699:
        mov     ecx, esi
        call    FUN_10008d30
loc_76a0:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 4], 0xffffffff
        test    eax, eax
        jz      loc_76bb
        mov     ecx, dword ptr [ebp - 0x18]
        test    ecx, ecx
        jz      loc_76bb
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 4]
loc_76bb:
        xor     al, al
loc_76bd:
        mov     ecx, dword ptr [ebp - 0xc]
        lea     esp, [ebp - 0x20]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
