/*
 * FUN_006492e0 (159 B) — __cdecl. State-machine bytecode driver.
 * Reads a global state byte (DAT_008058b0), dispatches through a
 * table (DAT_007f2d38), accumulates a float, and calls FUN_00648fe0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_008058b0;
extern int DAT_008058ac;
extern char DAT_008058fc;
extern int DAT_008058f8;
extern char *DAT_007b5a20;
extern int DAT_007f2d38[];
extern float DAT_00770168;
extern void __cdecl FUN_00562f40(int);
extern void __cdecl FUN_00648fe0(void);

__declspec(naked) void __cdecl FUN_006492e0(void *param1, void *param2)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0xc], eax
        mov     al, byte ptr [DAT_008058b0]
        movsx   ecx, al
        mov     edx, dword ptr [ecx*4 + DAT_007f2d38]
        mov     ebx, 0x1
        cmp     edx, ebx
        jz      l_loop
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_00562f40
        add     esp, 4
        pop     esi
        mov     dword ptr [DAT_008058ac], 0x19
        pop     ebx
        ret
    l_loop:
        mov     edx, dword ptr [DAT_007b5a20]
        mov     byte ptr [edx], al
        mov     eax, dword ptr [DAT_008058f8]
        inc     edx
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [DAT_007b5a20], edx
        mov     dword ptr [DAT_008058f8], eax
        jg      l_else
        add     ecx, -0x30
        mov     dword ptr [esp + 0x10], ecx
        fild    dword ptr [esp + 0x10]
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [DAT_00770168]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0xc]
        jmp     l_call
    l_else:
        mov     byte ptr [DAT_008058fc], bl
    l_call:
        call    FUN_00648fe0
        mov     al, byte ptr [DAT_008058b0]
        movsx   ecx, al
        cmp     dword ptr [ecx*4 + DAT_007f2d38], ebx
        jz      l_loop
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [esi], edx
        pop     esi
        pop     ebx
        ret
    }
}
