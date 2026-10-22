/*
 * FUN_0065B6F0 (495 B) — __fastcall (ECX = param_1), plain RET.
 *
 * Object-state update: validates a couple of global string IDs via
 * FUN_00415230, walks virtual methods at [vtable+0x60]/[vtable+0x2c],
 * and conditionally dispatches a sequence of update calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0065ab00(void *p, int a);
extern char __cdecl FUN_00415230(int a);
extern int __fastcall FUN_0041fd80(void *this);
extern int __fastcall FUN_005dd7a0(void *this, void *p);
extern void __cdecl FUN_0069eb70(int a, int b);
extern void __cdecl FUN_004084e0(void *p);
extern void __fastcall FUN_005c1720(void *this, int a);
extern void __fastcall FUN_005dd750(void *this, int a);
extern void __fastcall FUN_005c17e0(void *this, int a, int b, int c);

extern int g_7f25c0;
extern int g_7f268c;
extern int g_7f23b0;

__declspec(naked) void __fastcall FUN_0065b6f0(void *param_1)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 4]
        push    0x1
        push    edi
        call    FUN_0065ab00
        mov     eax, dword ptr [g_7f25c0]
        mov     ebp, dword ptr [esi + 8]
        mov     ecx, dword ptr [ebp + 4]
        add     esp, 8
        push    eax
        mov     byte ptr [edi + 0x614], 0x0
        mov     dword ptr [esi + 0x14], 0x0
        call    FUN_00415230
        cmp     al, 1
        jnz     L65b7f7
        mov     ebp, dword ptr [ebp + 0x3b0]
        test    ebp, ebp
        jz      L65b7f7
        lea     ebx, [ebp + 0x6a0]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L65b7f7
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ebp, eax
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L65b7f7
        mov     eax, dword ptr [edi + 0x4e0]
        test    eax, 0xfffffffc
        jz      L65b79b
        mov     ecx, eax
        and     ecx, 0xfffffffc
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        cmp     eax, 0x7e1
        jnz     L65b79b
        lea     ecx, [edi + 0x1c8]
        call    FUN_0041fd80
        cmp     eax, ebp
        jz      L65b7f7
L65b79b:
        mov     ecx, dword ptr [edi + 0x170]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov     ebx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x60]
        cmp     eax, ebx
        jz      L65b7f4
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    0x6
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L65b8d9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L65b8d9
        push    eax
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L65b7f4:
        mov     dword ptr [esi + 0x14], ebp
L65b7f7:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jnz     L65b857
        mov     eax, dword ptr [esi + 8]
        mov     ebp, dword ptr [eax + 0x2fc]
        test    ebp, ebp
        jz      L65b857
        mov     eax, dword ptr [g_7f23b0]
        mov     ecx, dword ptr [ebp + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L65b857
        lea     ebx, [ebp + 0x1c8]
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ecx, dword ptr [edi + 0x170]
        mov     edx, dword ptr [ecx]
        mov     ebp, eax
        call    dword ptr [edx + 0x60]
        mov     edx, eax
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        mov     dword ptr [esp + 0x10], edx
        call    dword ptr [eax + 0x60]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     eax, ecx
        jnz     L65b857
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     dword ptr [esi + 0x14], eax
L65b857:
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L65b873
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jnz     L65b873
        mov     dword ptr [esi + 0x14], 0x0
L65b873:
        mov     ebx, dword ptr [esi + 0x14]
        test    ebx, ebx
        jz      L65b8d9
        push    0x1
        mov     ecx, edi
        call    FUN_005c1720
        push    ebx
        mov     ecx, edi
        call    FUN_005dd750
        push    0x1
        push    0x1
        push    0x7e1
        mov     ecx, edi
        call    FUN_005c17e0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x2c]
        test    al, al
        jz      L65b8d9
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [esi + 4]
        call    FUN_005dd7a0
        mov     ecx, dword ptr [esi + 0xc]
        push    eax
        push    0x4
        call    FUN_0069eb70
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L65b8d9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L65b8d9
        push    eax
        call    FUN_004084e0
        add     esp, 4
L65b8d9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
