/*
 * FUN_0061e920 (224 B) — __cdecl, returns int. If g_8058ac == 1, fetches
 * an object via FUN_0064fc00 / FUN_0064fc50 and initializes its fields;
 * otherwise validates and possibly logs via FUN_00562f40. Then calls
 * FUN_00649920 and FUN_00650530. Returns the fetched object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;   /* 0x008058ac */
extern int g_80d988;   /* 0x0080d988 */

extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0064fc00(void);
extern void __cdecl FUN_0064fc50(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_00650530(void);

__declspec(naked) int FUN_0061e920(void)
{
    __asm {
        push    ecx
        push    ebx
        call    FUN_00649150
        mov     eax, dword ptr [g_8058ac]
        xor     ebx, ebx
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x4], ebx
        jnz     L_9dc
        lea     eax, [esp + 0x4]
        push    eax
        call    FUN_0064fc00
        mov     eax, dword ptr [esp + 0x8]
        add     esp, 0x4
        cmp     eax, ebx
        jnz     L_9c1
        lea     ecx, [esp + 0x4]
        push    ecx
        call    FUN_0064fc50
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x18], 0x9
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x1c], ebx
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [ecx + 0x21], bl
        mov     edx, dword ptr [esp + 0x8]
        mov     byte ptr [edx + 0x22], bl
        mov     eax, dword ptr [esp + 0x8]
        mov     word ptr [eax + 0x24], bx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x28], ebx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x2c], ebx
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x30], ebx
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [g_80d988]
        mov     dword ptr [ecx + 0x34], ebx
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edx + 0x40], eax
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x3c], 0x80da38
        mov     edx, dword ptr [esp + 0x8]
        add     esp, 0x4
        mov     dword ptr [edx + 0x48], ebx
        jmp     L_9d7
    L_9c1:
        cmp     dword ptr [eax + 0x18], 0x9
        jnz     L_9cd
        cmp     dword ptr [eax + 0x1c], 0x2
        jz      L_9d7
    L_9cd:
        push    0xe
        call    FUN_00562f40
        add     esp, 0x4
    L_9d7:
        call    FUN_00649150
    L_9dc:
        push    0x7b5890
        push    0x7b58e0
        push    0x7b5590
        call    FUN_00649920
        push    ebx
        call    FUN_00650530
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x10
        pop     ebx
        pop     ecx
        ret
    }
}
