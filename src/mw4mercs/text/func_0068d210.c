/*
 * FUN_0068d210 (112 B) — Dumps an array of 6-float records to a file:
 * fopen("f:\fred.out","w"), fprintf("%d,%d %d,%d\n", ...) per record,
 * fclose. Uses IAT entries 0x76b3bc (fopen), 0x76b3cc (fprintf),
 * 0x76b3d0 (fclose).
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b3bc;
extern void *g_76b3cc;
extern void *g_76b3d0;

__declspec(naked) void __fastcall FUN_0068d210(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        push    0x798ecc
        push    0x798ec0
        mov     edi, ecx
        call    dword ptr [g_76b3bc]
        mov     esi, dword ptr [edi]
        mov     edi, dword ptr [edi + 0x4]
        add     esp, 0x8
        cmp     esi, edi
        mov     ebx, eax
        jz      L_272
        push    ebp
        mov     ebp, dword ptr [g_76b3cc]
L_23a:
        fld     dword ptr [esi + 0xc]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x4]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x8]
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi]
        fstp    qword ptr [esp]
        push    0x798eb0
        push    ebx
        call    ebp
        add     esi, 0x18
        add     esp, 0x28
        cmp     esi, edi
        jnz     L_23a
        pop     ebp
L_272:
        push    ebx
        call    dword ptr [g_76b3d0]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
