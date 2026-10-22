/*
 * FUN_0065bed0 (141 B) — __fastcall (ECX = param_1), RET (no stack args).
 *
 * Calls a virtual method (vtable+0x2c); if nonzero, fetches a string via
 * FUN_005dd7a0/FUN_0069eb70 and decrements a refcount (freeing at 0).
 * Then updates a state flag and dispatches a virtual method (+0x118/+0x11c).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005dd7a0(void *p);
extern void __cdecl FUN_0069eb70(void *p1, void *p2);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_005c9850(void);

__declspec(naked) void __fastcall FUN_0065bed0(void *param_1)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi]
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      L_bf11
        lea     ecx, [esp + 0x8]
        push    ecx
        mov     ecx, dword ptr [edi + 0x4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [edi + 0xc]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_bf11
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_bf11
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_bf11:
        mov     esi, dword ptr [edi + 0x4]
        mov     ecx, esi
        call    FUN_005c98a0
        cmp     al, 0x1
        jnz     L_bf26
        mov     ecx, esi
        call    FUN_005c9850
L_bf26:
        cmp     byte ptr [esi + 0x2f2], 0x1
        jnz     L_bf4b
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     L_bf4b
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [edi + 0x14], 0x1
        call    dword ptr [edx + 0x118]
        pop     edi
        pop     esi
        pop     ecx
        ret
L_bf4b:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [edi + 0x14], 0x0
        call    dword ptr [eax + 0x11c]
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
