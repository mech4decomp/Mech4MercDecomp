/*
 * FUN_00607AF0 (241 B) — __cdecl, 2 stack params.
 * Looks up an entity, formats a position string via sprintf (IAT), and
 * passes it to a __thiscall logger. Uses FPU to build three double args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_7f24d8;   /* 0x007f24d8 */
extern char g_78bcbc[];          /* 0x0078bcbc "AI at %f,%f,%f" */
extern char g_78bca8[];          /* 0x0078bca8 "Entity at %f,%f,%f" */
extern char g_78bc50[];          /* 0x0078bc50 */
extern int (__cdecl *g_76b420)(char *, const char *, ...);  /* 0x0076b420 sprintf IAT */

extern int __cdecl FUN_00607140(void *a, int b);
extern int __stdcall FUN_0041fd80(void);
extern char __stdcall FUN_00415230(void *a);
extern void __stdcall FUN_006e2150(void *a);

__declspec(naked) void __stdcall FUN_00607AF0(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x64
        mov     eax, dword ptr [ebp + 0xc]
        push    esi
        push    0x1
        push    eax
        call    FUN_00607140
        add     esp, 0x8
        test    eax, eax
        jz      L_7BCD
        mov     ecx, dword ptr [eax + 0x14]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      L_7BCD
        cmp     esi, -0x1
        jz      L_7BCD
        mov     eax, dword ptr [g_7f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_7B7A
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fld     dword ptr [eax + 0x1c]
        sub     esp, 0x8
        fld     dword ptr [eax + 0x2c]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        lea     edx, [esp + 0x1c]
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        push    offset g_78bcbc
        push    edx
        jmp     L_7BB0
L_7B7A:
        mov     esi, dword ptr [esi + 0xd8]
        fld     dword ptr [esi + 0x8c]
        add     esi, 0x80
        fld     dword ptr [esi + 0x1c]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x2c]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        lea     eax, [esp + 0x1c]
        fstp    qword ptr [esp + 0x8]
        fstp    qword ptr [esp]
        push    offset g_78bca8
        push    eax
L_7BB0:
        call    dword ptr [g_76b420]
        add     esp, 0x20
        lea     ecx, [esp + 0x4]
        push    ecx
        mov     ecx, dword ptr [ebp + 0x8]
        call    FUN_006e2150
        mov     al, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_7BCD:
        mov     ecx, dword ptr [ebp + 0x8]
        push    offset g_78bc50
        call    FUN_006e2150
        mov     al, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
