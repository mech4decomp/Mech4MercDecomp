/*
 * FUN_0061E2C0 (488 B) — Game-state setup/teardown dispatcher (variant).
 *
 * Reads/writes global config flags (0x008058ac, 0x0080d988) and calls a
 * set of setup helpers (FUN_0064fc00/FUN_0064fc50/FUN_0064fc80,
 * FUN_00649920, FUN_00650530, FUN_0061e4b0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;
extern int g_80d988;

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fc00(void *a);
extern void __cdecl FUN_0064fc50(void *a);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_00649920(void *a, void *b, void *c);
extern void __cdecl FUN_00650530(int a);
extern int __cdecl FUN_0061e4b0(void *a, void *b);
extern void __cdecl FUN_0064fc80(void *a);

__declspec(naked) int FUN_0061e2c0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        xor     ebx, ebx
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x8], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     byte ptr [esp + 0x7], bl
        jnz     L_61e397
        lea     eax, [esp + 0x8]
        push    eax
        call    FUN_0064fc00
        mov     eax, dword ptr [esp + 0xc]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_61e36b
        lea     ecx, [esp + 0x8]
        push    ecx
        call    FUN_0064fc50
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edx + 0x18], 0x8
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x1c], ebx
        mov     ecx, dword ptr [esp + 0xc]
        mov     byte ptr [ecx + 0x21], bl
        mov     edx, dword ptr [esp + 0xc]
        mov     byte ptr [edx + 0x22], bl
        mov     eax, dword ptr [esp + 0xc]
        mov     word ptr [eax + 0x24], bx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x28], ebx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edx + 0x2c], ebx
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x30], ebx
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [g_80d988]
        mov     dword ptr [ecx + 0x34], ebx
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edx + 0x40], eax
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x3c], 0x80da38
        mov     edx, dword ptr [esp + 0xc]
        add     esp, 0x4
        mov     dword ptr [edx + 0x48], ebx
        jmp     L_61e392
L_61e36b:
        mov     ecx, dword ptr [eax + 0x18]
        cmp     ecx, 0x8
        jnz     L_61e388
        cmp     dword ptr [eax + 0x1c], 0x2
        jnz     L_61e380
        mov     byte ptr [esp + 0x7], 0x1
        jmp     L_61e392
L_61e380:
        cmp     ecx, 0x8
        jnz     L_61e388
        mov     ecx, dword ptr [eax + 0x1c]
L_61e388:
        push    0xe
        call    FUN_00562f40
        add     esp, 0x4
L_61e392:
        call    FUN_00649150
L_61e397:
        push    0x7b5890
        push    0x7b58e0
        push    0x7b5590
        call    FUN_00649920
        push    ebx
        call    FUN_00650530
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x10
        cmp     eax, 0x6
        jnz     L_61e403
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_0061e4b0
        mov     cl, byte ptr [esp + 0xf]
        add     esp, 0x8
        cmp     cl, bl
        jz      L_61e3e4
        push    0x28
        call    FUN_00562f40
        add     esp, 0x4
        jmp     L_61e41e
L_61e3e4:
        mov     edx, dword ptr [esp + 0x8]
        mov     cl, byte ptr [esp + 0x10]
        mov     byte ptr [edx + 0x21], cl
        mov     edx, dword ptr [esp + 0x8]
        mov     cl, byte ptr [esp + 0x14]
        mov     byte ptr [edx + 0x22], cl
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x28], eax
        jmp     L_61e41e
L_61e403:
        cmp     byte ptr [esp + 0x7], bl
        jnz     L_61e41e
        mov     eax, dword ptr [esp + 0x8]
        mov     byte ptr [eax + 0x21], bl
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [ecx + 0x22], bl
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x28], ebx
L_61e41e:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x3c], ebx
        cmp     dword ptr [g_8058ac], 0xd
        jnz     L_61e49f
        call    FUN_00649150
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_61e47a
        lea     ecx, [esp + 0xc]
        push    ecx
        call    FUN_0064fc80
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx + 0x18]
        add     esp, 0x4
        cmp     eax, 0x2
        jz      L_61e45f
        push    0x1a
        call    FUN_00562f40
        add     esp, 0x4
L_61e45f:
        cmp     byte ptr [esp + 0x7], bl
        jnz     L_61e473
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x3c], ecx
L_61e473:
        call    FUN_00649150
        jmp     L_61e48f
L_61e47a:
        push    0x23
        call    FUN_00562f40
        mov     eax, dword ptr [esp + 0xc]
        add     esp, 0x4
        mov     dword ptr [eax + 0x3c], 0x80da38
L_61e48f:
        cmp     byte ptr [esp + 0x7], bl
        jz      L_61e49f
        push    0x28
        call    FUN_00562f40
        add     esp, 0x4
L_61e49f:
        mov     eax, dword ptr [esp + 0x8]
        pop     ebx
        add     esp, 0x14
        ret
    }
}
