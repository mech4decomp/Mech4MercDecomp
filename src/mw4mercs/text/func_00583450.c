/* FUN_00583450 - 0x00583450, size 2396 B
 * __thiscall constructor, RET 0x10 (4 args). Large mech/vehicle object
 * constructor: initializes many sub-objects, vtable pointers, joint/site
 * name lookups, and a per-joint loop. Returns this in EAX.
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int g_7b5414[];      /* 0x007b5414 - joint lookup table */
extern short g_7db0ac;      /* 0x007db0ac */
extern short g_7db0ae;      /* 0x007db0ae */
extern int g_781588;        /* 0x00781588 */
extern int g_78158c;        /* 0x0078158c */
extern int g_781590;        /* 0x00781590 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_005f35f0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_00583e80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00419d60(void);
extern void __cdecl FUN_00584b40(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005f8ed0(void);
extern void __cdecl FUN_005f8ec0(void);
extern void __cdecl FUN_0066ac20(void);
extern void __cdecl FUN_005abe10(void);
extern void __cdecl FUN_00590410(void);
extern void __cdecl FUN_005a1880(void);
extern void __cdecl FUN_005a3010(void);
extern void __cdecl FUN_00583ed0(void);
extern void __cdecl FUN_005fa480(void);
extern void __cdecl FUN_00584540(void);

__declspec(naked) void* func_00583450(void)
{
    __asm {
        mov eax, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0x8]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov eax, dword ptr [esp+0x18]
        mov esi, ecx
        mov ecx, dword ptr [esp+0x20]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_005f35f0
        lea edi, [esi+0x51c]
        xor ebx, ebx
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x773328
        lea edi, [esi+0x544]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        lea edi, [esi+0x54c]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        lea edi, [esi+0x554]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        lea edi, [esi+0x55c]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        lea edi, [esi+0x580]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        lea edi, [esi+0x588]
        push ebx
        mov ecx, edi
        call FUN_0041fc80
        mov dword ptr [edi], 0x77ceac
        push 0x1
        lea edi, [esi+0x594]
        push ebx
        mov ecx, edi
        call FUN_00416990
        mov dword ptr [edi], 0x7821f4
        mov edi, 0x3f800000
        mov dword ptr [esi+0x62c], ebx
        mov dword ptr [esi+0x628], ebx
        mov dword ptr [esi+0x634], edi
        mov dword ptr [esi+0x630], edi
        lea ecx, [esi+0x6bc]
        mov dword ptr [esi+0x5d8], edi
        mov dword ptr [esi+0x5dc], edi
        mov dword ptr [esi+0x5e0], edi
        mov dword ptr [esi+0x5e4], edi
        mov dword ptr [esi+0x5e8], edi
        mov dword ptr [esi+0x5ec], edi
        mov dword ptr [esi+0x61c], ebx
        mov dword ptr [esi+0x63c], ebx
        mov dword ptr [esi+0x638], ebx
        mov dword ptr [esi+0x644], edi
        mov dword ptr [esi+0x640], edi
        mov byte ptr [esi+0x6ac], bl
        call FUN_00583e80
        lea ecx, [esi+0x6c8]
        call FUN_00583e80
        lea ecx, [esi+0x6d4]
        call FUN_00583e80
        lea ecx, [esi+0x6e0]
        call FUN_00583e80
        lea ecx, [esi+0x6ec]
        call FUN_00583e80
        lea ecx, [esi+0x6f8]
        call FUN_00583e80
        lea ecx, [esi+0x714]
        mov byte ptr [esi+0x704], bl
        call FUN_00583e80
        lea ecx, [esi+0x720]
        call FUN_00583e80
        lea ecx, [esi+0x72c]
        call FUN_00583e80
        lea ecx, [esi+0x738]
        call FUN_00583e80
        lea ecx, [esi+0x744]
        call FUN_00583e80
        lea ecx, [esi+0x750]
        call FUN_00583e80
        lea ecx, [esi+0x76c]
        mov byte ptr [esi+0x75c], bl
        call FUN_00583e80
        lea ecx, [esi+0x778]
        call FUN_00583e80
        lea ecx, [esi+0x784]
        call FUN_00583e80
        lea ecx, [esi+0x790]
        call FUN_00583e80
        lea ecx, [esi+0x79c]
        call FUN_00583e80
        lea ecx, [esi+0x7a8]
        call FUN_00583e80
        mov dword ptr [esi+0x7e4], edi
        mov dword ptr [esi+0x7f4], edi
        mov dword ptr [esi+0x7e0], ebx
        mov dword ptr [esi+0x7dc], ebx
        mov dword ptr [esi+0x7e8], edi
        mov dword ptr [esi+0x804], edi
        mov dword ptr [esi+0x7f0], ebx
        mov dword ptr [esi+0x7ec], ebx
        mov dword ptr [esi+0x7f8], edi
        mov dword ptr [esi+0x814], edi
        mov dword ptr [esi+0x800], ebx
        mov dword ptr [esi+0x7fc], ebx
        mov dword ptr [esi+0x808], edi
        mov dword ptr [esi+0x824], edi
        lea ebp, [esi+0x8dc]
        mov dword ptr [esi+0x810], ebx
        mov dword ptr [esi+0x80c], ebx
        mov dword ptr [esi+0x818], edi
        mov dword ptr [esi+0x874], ebx
        push ebx
        mov ecx, ebp
        mov byte ptr [esi+0x7b4], bl
        mov dword ptr [esi+0x820], ebx
        mov dword ptr [esi+0x81c], ebx
        mov dword ptr [esi+0x828], edi
        mov dword ptr [esi+0x880], ebx
        mov dword ptr [esi+0x8d8], ebx
        call FUN_0041fc80
        mov dword ptr [ebp], 0x77ceac
        lea ebp, [esi+0x8e4]
        push ebx
        mov ecx, ebp
        call FUN_0041fc80
        mov dword ptr [ebp], 0x77ceac
        or eax, 0xffffffff
        push 0x1
        lea ebp, [esi+0x974]
        mov word ptr [esi+0x932], ax
        mov word ptr [esi+0x934], bx
        push ebx
        mov ecx, ebp
        mov word ptr [esi+0x936], ax
        mov word ptr [esi+0x938], bx
        call FUN_00416990
        mov dword ptr [ebp], 0x7821c8
        mov ebp, dword ptr [esi+0x2bc]
        mov byte ptr [esi+0x9b0], bl
        mov dword ptr [esi+0x9c0], ebx
        mov dword ptr [esi+0x9c8], ebx
        mov dword ptr [esi], 0x782060
        lea ecx, [ebp*8]
        sub ecx, ebp
        shl ecx, 0x2
        push ecx
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L58377c
        lea edx, [ebp-1]
        mov dword ptr [esp+0x20], edx
        jmp L58377e
L58377c:
        xor eax, eax
L58377e:
        or ecx, 0xffffffff
        cmp ebp, ebx
        mov dword ptr [esi+0x5bc], eax
        mov dword ptr [esi+0x5d0], ecx
        mov dword ptr [esi+0x5d4], ebx
        mov dword ptr [esi+0x98c], ebx
        mov dword ptr [esi+0x528], ebx
        mov dword ptr [esi+0x574], ebx
        mov dword ptr [esi+0x9c4], ecx
        jle L5837ef
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esi+0x2c0]
        mov dword ptr [esp+0x20], eax
L5837bd:
        mov ecx, dword ptr [esp+0x20]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx+0xd8]
        mov ecx, dword ptr [esp+0x1c]
        add eax, 0x20
        push eax
        call FUN_00419d60
        mov edx, dword ptr [esp+0x20]
        mov ecx, dword ptr [esp+0x1c]
        add edx, 0x4
        add ecx, 0x1c
        dec ebp
        mov dword ptr [esp+0x20], edx
        mov dword ptr [esp+0x1c], ecx
        jnz L5837bd
L5837ef:
        mov ecx, esi
        mov dword ptr [esi+0x99c], ebx
        call FUN_00584b40
        push 0x782054
        mov ecx, esi
        mov dword ptr [esi+0x82c], ebx
        call FUN_005f8fa0
        mov dword ptr [esi+0x90c], ebx
        mov dword ptr [esi+0x910], edi
        mov dword ptr [esi+0x914], ebx
        push 0x782040
        mov ecx, esi
        mov dword ptr [esi+0x82c], eax
        mov dword ptr [esi+0x838], ebx
        mov dword ptr [esi+0x83c], ebx
        mov dword ptr [esi+0x918], ebx
        mov dword ptr [esi+0x91c], edi
        mov dword ptr [esi+0x920], ebx
        mov dword ptr [esi+0x8f8], ebx
        call FUN_005f8fa0
        push 0x782030
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x8f8], eax
        mov dword ptr [esi+0x8f0], ebx
        mov dword ptr [esi+0x8f4], ebx
        mov byte ptr [esi+0x8ec], bl
        mov byte ptr [esi+0x8ed], bl
        call FUN_00412570
        lea ecx, [esp+0x20]
        lea ebp, [esi+0x28c]
        push ecx
        mov ecx, ebp
        call FUN_00416b60
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L5838b3
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L5838b3
        push eax
        call FUN_004084e0
        add esp, 0x4
L5838b3:
        mov edx, dword ptr [esp+0x1c]
        push 0x782020
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x8f0], edx
        call FUN_00412570
        lea eax, [esp+0x20]
        push eax
        mov ecx, ebp
        call FUN_00416b60
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L5838f6
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L5838f6
        push eax
        call FUN_004084e0
        add esp, 0x4
L5838f6:
        mov ecx, dword ptr [esp+0x1c]
        mov dword ptr [esi+0x8f4], ecx
        push 0x782014
        lea ecx, [esp+0x24]
        call FUN_00412570
        lea edx, [esp+0x20]
        push edx
        mov ecx, ebp
        call FUN_00416b60
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L583939
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L583939
        push eax
        call FUN_004084e0
        add esp, 0x4
L583939:
        mov eax, dword ptr [esp+0x1c]
        push 0x782008
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x838], eax
        call FUN_00412570
        lea ecx, [esp+0x20]
        push ecx
        mov ecx, ebp
        call FUN_00416b60
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L58397c
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L58397c
        push eax
        call FUN_004084e0
        add esp, 0x4
L58397c:
        mov edx, dword ptr [esp+0x1c]
        push 0x781ff4
        mov ecx, esi
        mov dword ptr [esi+0x83c], edx
        mov dword ptr [esi+0x840], ebx
        mov dword ptr [esi+0x844], ebx
        call FUN_005f8fa0
        push 0x781fe0
        mov ecx, esi
        mov dword ptr [esi+0x840], eax
        call FUN_005f8fa0
        push 0x782054
        mov ecx, esi
        mov dword ptr [esi+0x844], eax
        call FUN_005f8ed0
        push 0x77d100
        mov ecx, esi
        mov dword ptr [esi+0x7cc], eax
        call FUN_005f8ed0
        push 0x781fd4
        mov ecx, esi
        mov dword ptr [esi+0x7d0], eax
        call FUN_005f8ed0
        push 0x781fc8
        mov ecx, esi
        mov dword ptr [esi+0x7d4], eax
        call FUN_005f8ed0
        push 0x781fc8
        mov ecx, esi
        mov dword ptr [esi+0x7d8], eax
        call FUN_005f8fa0
        push 0x781fbc
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x904], eax
        call FUN_00412570
        lea eax, [esp+0x20]
        push eax
        mov ecx, ebp
        call FUN_00416b60
        mov ebp, eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L583a47
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L583a47
        push eax
        call FUN_004084e0
        add esp, 0x4
L583a47:
        mov edx, dword ptr [esi+0x78]
        lea ecx, [esi+0x78]
        mov dword ptr [esi+0x900], ebp
        call dword ptr [edx+4]
        mov ebp, eax
        mov eax, dword ptr [ebp+0x634]
        mov ecx, dword ptr [g_7b5414 + eax*4]
        mov dx, word ptr [ebp+0x418]
        cmp dx, word ptr [g_7db0ac]
        lea eax, [ebp+0x418]
        mov dword ptr [esi+0x578], ecx
        mov dword ptr [esi+0x908], ebx
        jnz L583a94
        mov cx, word ptr [eax+2]
        cmp cx, word ptr [g_7db0ae]
        jz L583aab
L583a94:
        mov edx, dword ptr [esi+0x900]
        push 0x1
        push edx
        push eax
        mov ecx, esi
        call FUN_005fa480
        mov dword ptr [esi+0x908], eax
L583aab:
        push 0x781fa8
        mov ecx, esi
        call FUN_005f8ed0
        push 0x781f98
        mov ecx, esi
        mov dword ptr [esi+0x7b8], eax
        call FUN_005f8ed0
        push 0x781f8c
        mov ecx, esi
        mov dword ptr [esi+0x7bc], eax
        call FUN_005f8ed0
        push 0x781f80
        mov ecx, esi
        mov dword ptr [esi+0x648], eax
        call FUN_005f8ed0
        push 0x781f74
        mov ecx, esi
        mov dword ptr [esi+0x64c], eax
        call FUN_005f8ed0
        push 0x781f68
        mov ecx, esi
        mov dword ptr [esi+0x650], eax
        call FUN_005f8ed0
        push esi
        push 0x782014
        mov dword ptr [esi+0x654], eax
        call FUN_005f8ec0
        add esp, 0x8
        push 0x58b9a0
        push ebx
        lea ecx, [esi+0x2d0]
        push eax
        call FUN_0066ac20
        push esi
        push 0x782008
        call FUN_005f8ec0
        add esp, 0x8
        push 0x58b9e0
        push ebx
        push eax
        lea ecx, [esi+0x2d0]
        call FUN_0066ac20
        lea eax, [ebp+0x424]
        push eax
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x8d0], ebx
        mov dword ptr [esi+0x8d4], ebx
        call FUN_00412570
        lea ecx, [esp+0x20]
        push ecx
        lea ecx, [esi+0x28c]
        call FUN_00416b60
        mov dword ptr [esp+0x1c], eax
        mov eax, dword ptr [esp+0x20]
        cmp eax, ebx
        jz L583ba2
        mov cl, byte ptr [eax-1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jnz L583ba2
        push eax
        call FUN_004084e0
        add esp, 0x4
L583ba2:
        mov edx, dword ptr [esp+0x1c]
        lea eax, [ebp+0x524]
        push eax
        lea ecx, [esp+0x24]
        mov dword ptr [esi+0x8d0], edx
        call FUN_00412570
        lea ecx, [esp+0x20]
        push ecx
        lea ecx, [esi+0x28c]
        call FUN_00416b60
        mov ecx, dword ptr [esp+0x20]
        cmp ecx, ebx
        mov dword ptr [esp+0x1c], eax
        jz L583bef
        mov dl, byte ptr [ecx-1]
        dec ecx
        dec dl
        mov byte ptr [ecx], dl
        jnz L583bef
        push ecx
        call FUN_004084e0
        mov eax, dword ptr [esp+0x20]
        add esp, 0x4
L583bef:
        mov ecx, dword ptr [esi+0x99c]
        cmp ecx, ebx
        mov dword ptr [esi+0x8d4], eax
        jz L583c49
        mov dx, word ptr [ebp+0x40c]
        mov word ptr [ecx+0x17c], dx
        mov dx, word ptr [ebp+0x40e]
        mov word ptr [ecx+0x17e], dx
        mov dx, word ptr [ebp+0x414]
        mov word ptr [ecx+0x180], dx
        mov dx, word ptr [ebp+0x416]
        mov word ptr [ecx+0x182], dx
        mov edx, dword ptr [esi+0x8d0]
        mov dword ptr [ecx+0x1a4], edx
        mov dword ptr [ecx+0x1a8], eax
L583c49:
        push 0xa8
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L583c9c
        push ecx
        mov cx, word ptr [ebp+0x62c]
        mov edx, esp
        mov word ptr [edx], cx
        mov cx, word ptr [ebp+0x62e]
        mov word ptr [edx+2], cx
        mov edx, dword ptr [esp+0x1c]
        mov ecx, dword ptr [edx+0x14c]
        push esi
        push ecx
        mov ecx, dword ptr [edx+0x150]
        mov edx, dword ptr [edx+0x148]
        push ecx
        mov ecx, dword ptr [ebp+0x628]
        push edx
        push ecx
        mov ecx, eax
        call FUN_005abe10
        jmp L583c9e
L583c9c:
        xor eax, eax
L583c9e:
        mov edx, dword ptr [esp+0x18]
        mov dword ptr [esi+0x408], eax
        mov al, byte ptr [edx+0x154]
        mov ecx, esi
        mov byte ptr [esi+0x510], al
        call FUN_00590410
        push 0x150
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L583cd6
        push esi
        mov ecx, eax
        call FUN_005a1880
        jmp L583cd8
L583cd6:
        xor eax, eax
L583cd8:
        push 0x20
        mov dword ptr [esi+0x9ac], eax
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebx
        jz L583cf6
        push esi
        mov ecx, eax
        call FUN_005a3010
        jmp L583cf8
L583cf6:
        xor eax, eax
L583cf8:
        mov ecx, dword ptr [esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr [esi+0x9a0], eax
        mov dword ptr [esi+0x8a4], ebx
        call FUN_00583ed0
        mov dx, word ptr [ebp+0x630]
        cmp dx, word ptr [g_7db0ac]
        jnz L583d30
        mov ax, word ptr [ebp+0x632]
        cmp ax, word ptr [g_7db0ae]
        jz L583d4f
L583d30:
        mov dx, word ptr [ebp+0x632]
        push ecx
        mov cx, word ptr [ebp+0x630]
        mov eax, esp
        mov word ptr [eax], cx
        mov ecx, esi
        mov word ptr [eax+2], dx
        call FUN_00584540
L583d4f:
        fld dword ptr [esi+0x3b8]
        mov eax, dword ptr [esi+0x3ec]
        cmp eax, ebx
        fstp dword ptr [esi+0x9a8]
        jz L583d91
        mov eax, dword ptr [g_781588]
        mov ecx, dword ptr [g_78158c]
        mov edx, dword ptr [g_781590]
        mov dword ptr [esi+0x5e4], eax
        mov dword ptr [esi+0x5e8], ecx
        mov dword ptr [esi+0x5ec], edx
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
L583d91:
        mov dword ptr [esi+0x5e4], edi
        mov dword ptr [esi+0x5e8], edi
        mov dword ptr [esi+0x5ec], edi
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
    }
}
