/*
 * FUN_0061DEA0 (478 B) — Game-state setup/teardown dispatcher.
 *
 * Reads/writes several global config flags (0x0080d988, 0x008058ac,
 * 0x008058f4, 0x008058c0/c4) and calls a set of setup helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_80d988;
extern int g_8058ac;
extern char g_8058f4;
extern int g_8058c0;
extern int g_8058c4;

extern void __cdecl FUN_0069ae70(int a, int b);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_0064fcd0(void *a);
extern void __cdecl FUN_00649920(void *a, void *b, void *c);
extern void __cdecl FUN_00650530(int a);
extern int __cdecl FUN_0061e4b0(void *a, void *b);
extern void __cdecl FUN_0064fc80(void *a);

__declspec(naked) int FUN_0061dea0(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [g_80d988]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x4], ebx
        jz      L_61dec1
        push    0x27
        push    0x3e
        call    FUN_0069ae70
        add     esp, 0x8
        jmp     L_61def5
L_61dec1:
        mov     eax, dword ptr [g_8058ac]
        cmp     eax, 0x3d
        jnz     L_61ded8
        mov     byte ptr [g_8058f4], bl
        call    FUN_00649150
        jmp     L_61def5
L_61ded8:
        cmp     eax, 0x41
        jnz     L_61deeb
        mov     byte ptr [g_8058f4], 0x1
        call    FUN_00649150
        jmp     L_61def5
L_61deeb:
        push    0x26
        call    FUN_00562f40
        add     esp, 0x4
L_61def5:
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_61df8e
        lea     eax, [esp + 0x4]
        push    eax
        call    FUN_0064fcd0
        mov     al, byte ptr [g_8058f4]
        add     esp, 0x4
        cmp     al, bl
        jz      L_61df25
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x18], 0xa
        jmp     L_61df30
L_61df25:
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx + 0x18], 0x6
L_61df30:
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x1c], ebx
        mov     ecx, dword ptr [esp + 0x4]
        mov     byte ptr [ecx + 0x21], bl
        mov     edx, dword ptr [esp + 0x4]
        mov     byte ptr [edx + 0x22], bl
        mov     eax, dword ptr [esp + 0x4]
        mov     word ptr [eax + 0x24], bx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x28], ebx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx + 0x2c], ebx
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax + 0x30], ebx
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [g_80d988]
        mov     dword ptr [ecx + 0x34], ebx
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx + 0x40], eax
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x3c], 0x80da38
        mov     edx, dword ptr [esp + 0x4]
        mov     dword ptr [edx + 0x48], ebx
        call    FUN_00649150
        jmp     L_61df98
L_61df8e:
        push    0x23
        call    FUN_00562f40
        add     esp, 0x4
L_61df98:
        push    0x7b5890
        push    0x7b58e0
        push    0x7b557c
        call    FUN_00649920
        push    ebx
        call    FUN_00650530
        mov     al, byte ptr [g_8058f4]
        add     esp, 0x10
        cmp     al, bl
        jz      L_61dfc8
        mov     eax, dword ptr [g_8058c0]
        mov     dword ptr [g_8058c4], eax
L_61dfc8:
        cmp     dword ptr [g_8058ac], 0x6
        jnz     L_61e000
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_0061e4b0
        mov     ecx, dword ptr [esp + 0xc]
        mov     dl, byte ptr [esp + 0x14]
        mov     byte ptr [ecx + 0x21], dl
        mov     ecx, dword ptr [esp + 0xc]
        mov     dl, byte ptr [esp + 0x18]
        mov     byte ptr [ecx + 0x22], dl
        mov     ecx, dword ptr [esp + 0xc]
        add     esp, 0x8
        mov     dword ptr [ecx + 0x28], eax
L_61e000:
        mov     edx, dword ptr [esp + 0x4]
        cmp     dword ptr [g_8058ac], 0xd
        mov     dword ptr [edx + 0x3c], ebx
        mov     dword ptr [esp + 0x8], ebx
        pop     ebx
        jnz     L_61e076
        call    FUN_00649150
        cmp     dword ptr [g_8058ac], 0x1
        jnz     L_61e061
        lea     eax, [esp + 0x4]
        push    eax
        call    FUN_0064fc80
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [ecx + 0x18]
        add     esp, 0x4
        cmp     eax, 0x2
        jz      L_61e046
        push    0x1a
        call    FUN_00562f40
        add     esp, 0x4
L_61e046:
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [edx + 0x3c]
        __asm _emit 0x8B __asm _emit 0x4C __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov ecx,[esp+0] - MSVC6 drops zero disp (8B 0C 24) */
        mov     dword ptr [ecx + 0x3c], eax
        call    FUN_00649150
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov eax,[esp+0] - MSVC6 drops zero disp (8B 04 24) */
        add     esp, 0x10
        ret
L_61e061:
        push    0x23
        call    FUN_00562f40
        mov     edx, dword ptr [esp + 0x4]
        add     esp, 0x4
        mov     dword ptr [edx + 0x3c], 0x80da38
L_61e076:
        __asm _emit 0x8B __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 /* __emit: mov eax,[esp+0] - MSVC6 drops zero disp (8B 04 24) */
        add     esp, 0x10
        ret
    }
}
