/*
 * FUN_1000C910 (45 B) - __stdcall, RET 0x4.  Releases each object in a
 * table: iterates [esi+4] entries of the pointer array at [esi], calling
 * FUN_1000c550 (guarded release) on each.  (Transcribed from reference
 * bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_1000c550(void);   /* rel32 call (release) */

__declspec(naked) void __stdcall FUN_1000C910(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     al, byte ptr [esi + 4]
        xor     bl, bl
        test    al, al
        jbe     short L_1000c938
        nop
L_1000c920:
        mov     ecx, dword ptr [esi]
        xor     eax, eax
        mov     al, bl
        mov     edx, dword ptr [ecx + eax*4]
        push    edx
        call    FUN_1000c550
        mov     al, byte ptr [esi + 4]
        inc     bl
        cmp     bl, al
        jb      short L_1000c920
L_1000c938:
        pop     esi
        pop     ebx
        ret     4
    }
}
