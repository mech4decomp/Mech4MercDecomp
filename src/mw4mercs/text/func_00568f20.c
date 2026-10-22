/*
 * FUN_00568F20 (400 B) — Object lookup/dispatch helper.
 *
 * Takes a uint parameter, looks up an object by ID, checks various
 * conditions, and returns a result code (-2 on failure, >=0 on success).
 *
 * __cdecl, returns int.
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_00568f20(unsigned int param_1)
{
    

extern void __cdecl FUN_00580baf(void);
extern void __cdecl FUN_100566c42(void);
extern void __cdecl FUN_0064e5b8(void);
extern void __cdecl FUN_0064e4e8(void);
extern void __cdecl FUN_0064e09f(void);
extern void __cdecl FUN_0064e096(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca9c(void);
extern int DAT_007f268c;
extern void __cdecl FUN_10041517e(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_100415162(void);
extern void __cdecl FUN_0058125b(void);
extern void __cdecl FUN_00580c3a(void);
extern void __cdecl FUN_0064dfe0(void);
extern void __cdecl FUN_100568dc5(void);
extern void __cdecl FUN_100408383(void);
extern void __cdecl FUN_100408366(void);
__asm {
sub     esp, 0x0c
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]  /* param_1 */
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x0c], 0x0  /* local_c = NULL */
        mov     dword ptr [esp + 0x10], 0x0  /* local_8 = NULL */
        mov     dword ptr [esp + 0x14], 0x0  /* local_4 = NULL */
        jz      L63

        /* (param_1 & 0xf00000) != 0 path: convert to offset and enumerate */
        lea     eax, dword ptr [esp + 0x0c]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580baf
        add     esp, 0x8
        jmp     L53

L63:
        /* (param_1 & 0xf00000) == 0 path: look up via game object system */
        call FUN_100566c42
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5b8
        test    al, al
        jz      L53
        push    esi
        mov     ecx, edi
        call FUN_0064e4e8
        mov     ebp, eax
        mov     ecx, ebp
        call FUN_0064e09f
        mov     edi, dword ptr [eax]
        mov     ecx, ebp
        call FUN_0064e096
        cmp     edi, dword ptr [eax + 0x4]
        jz      L53

L9d:
        /* Loop: iterate through objects */
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fca9c
        mov     esi, eax
        test    esi, esi
        jz      L40
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L40
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041517e
        cmp     al, 0x1
        jne     L40
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      L40
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415162
        cmp     al, 0x1
        jne     L40
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     L40
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x1c], esi
        jz      L2f

        /* local_8 != local_4: append to existing list */
        lea     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    eax
        call FUN_0058125b
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     L40

L2f:
        /* local_8 == local_4: grow list */
        push    0x1
        lea     edx, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea     ecx, dword ptr [esp + 0x18]
        call FUN_00580c3a

L40:
        mov     ecx, ebp
        add     edi, 0x4
        call FUN_0064dfe0
        cmp     edi, dword ptr [eax + 0x4]
        jnz     L9d

L53:
        /* Iterate through collected results */
        mov     esi, dword ptr [esp + 0x0c]
        cmp     esi, dword ptr [esp + 0x10]
        jz      L7d

L5d:
        mov     eax, dword ptr [esi]
        push    eax
        call FUN_100568dc5
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jge     L96
        mov     eax, dword ptr [esp + 0x10]
        add     esi, 0x4
        cmp     esi, eax
        jnz     L5d
        mov     esi, dword ptr [esp + 0x0c]

L7d:
        test    esi, esi
        jz      L8a
        push    esi
        call FUN_100408383
        add     esp, 0x4

L8a:
        pop     edi
        pop     esi
        mov     eax, 0xfffffffe
        pop     ebp
        add     esp, 0x0c
        ret

L96:
        /* Success path */
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      La7
        push    eax
        call FUN_100408366
        add     esp, 0x4

La7:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0x0c
        ret
    }


}
